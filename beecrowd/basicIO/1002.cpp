#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double a,r;

    cin>>r;
    a = pow(r,2) * M_PI;
    cout << fixed << setprecision(4)<<"A="<<a<<endl;

    

    return 0;
}