#include <iostream>
#include <stdio.h>


int main(){
    int x,part_one,part_two;
    std::cin>>x;

    if(x%2==0 && x>2){
        std::cout<<"YES"<<std::endl;
    }else{
        std::cout<<"NO"<<std::endl;
    }

    return 0;
}