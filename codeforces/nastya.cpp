#include <iostream>
#include <array>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    int n,opposite;
    
    unordered_map<int,int> mapaReferencia;
    
    cin>>n;
    for (int i = 0; i<n;i++){
        int user_input;
        cin>>user_input;
        if(user_input != 0){
            opposite = (int) user_input * (-1);
            mapaReferencia[opposite] = 1;
        }
    }
    cout<<mapaReferencia.size()<<endl;
}