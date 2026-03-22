#include <iostream>
#include <stdio.h>


int main(){
    int n,ans,count,aux;
    std::cin>>n;
    int arr[n];
    ans = 0;
    
    for(int i=0;i<n;i++){
        std::cin >> arr[i];
    }
    
    ans = 0;
    count = 0;
    aux = 0;

    for(int x: arr){
        if ( count == 4){
            ans +=1;
            count = 0;
            std::cout<<"contagem igual a 4"<<std::endl;
        }
        if ((count + x) > 4  ){
            count = count + (4 - x);
            ans += 1;
            count = 4 - x;
            std::cout<<"contagem maior q 4"<<std::endl;
        }else{
            count += x;
            std::cout<<"contagem incrementada "<<std::endl;
        }
    }

    std::cout<<ans<<std::endl;



    return 0;
}