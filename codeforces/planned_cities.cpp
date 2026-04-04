#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define endl '\n'
#define FASTIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    FASTIO
    int n;
    char input;
    cin>>n;
    vector<vector<int>> matriz(n,vector<int>(n));
    bool valid = true;

    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>matriz[i][j];
            if(i == j){
                if(matriz[i][j] != 'R'){
                    valid = false;
                }
                
            }
        }
    }

    return 0;
}