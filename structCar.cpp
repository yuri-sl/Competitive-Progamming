#include <iostream>
#include <string>
using namespace std;

struct car{
    string name;
    int age;
    char grade;
};

int main(){
    car myCar;
    myCar.name="MUstang";
    myCar.age=5;
    myCar.grade='C';

    return 0;
}

