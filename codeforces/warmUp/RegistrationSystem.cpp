#include <stdio.h>
#include <iostream>
#include <map>
#include <string>

int main(){
    int n;
    std::string user_input,ans;
    std::map<std::string,int> db;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>user_input;
        if(db.count(user_input) == 0){
            db.insert({user_input,1});
            ans = "OK";
            std::cout<<ans<<std::endl;
        }
        else{
            int count = db.at(user_input);
            ans = user_input + std::to_string(count);
            std::cout<<ans<<std::endl;
            db.at(user_input) = count + 1;
        }
    }



    return 0;
}