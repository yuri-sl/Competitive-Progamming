#include<stdio.h>
#include <iostream>


enum Level{
    LOW,MEDIUM,HIGH
};

enum LevelNew {
  LOW = 25,
  MEDIUM = 50,
  HIGH = 75
}; 

int main(){
    enum Level myVar = MEDIUM;

    std::cout<<myVar;
    return 0;

}