#include <iostream>
#include <stdio.h>
#include <map>

int main(){
    int n,total,aux;
    std::cin>>n;
    int a,b,c;

    total = 0;
    for(int i=0;i<n;i++){
        aux = 0;
        std::cin>>a>>b>>c;
        
        aux = a+b+c;

        if(aux >= 2){
            total = total + 1;
        }
    }
    std::cout<<total<<std::endl;
    return 0;
}