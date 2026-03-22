#include <iostream>
#include <stdio.h>
#include <string>

int main(){
    int n;
    std::string m,ans;
    int aux_size;

    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>m;
        aux_size = m.length();

        if(aux_size > 10){
            ans = m[0];
            ans = ans + std::to_string(aux_size - 2) + m[m.length() -1];
            std::cout<<ans<<std::endl;
        }else{
            ans = m;
            std::cout<<ans<<std::endl;
        }



    }
    return 0;
}