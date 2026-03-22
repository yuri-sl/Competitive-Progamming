#include <iostream>
#include <stdio.h>
#include <string>
#include <list>
#include <cctype>//Convert to lower
#include <algorithm>//Required for std::find

int main(){
    std::string m,ans,aux;
    std::list<char> vogais = {'a','e','i','o','u','y'};
    std::cin>>m;
    for(char c:m){
        char lowerCase = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
        // std::cout<<lowerCase<<std::endl;
        std::list<char>::iterator it = std::find(vogais.begin(),vogais.end(),lowerCase);
        if(it == vogais.end()){
            aux = aux + lowerCase;
        }
    }
    ans = "";
    for(char x:aux){
        ans += '.';
        ans += x;
    }
    std::cout<<ans<<std::endl;
    return 0;
}