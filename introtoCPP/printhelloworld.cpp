#include<iostream>
#include <typeinfo>
using namespace std;

int main(){
    int var[20];
    cout<< typeid(var).name() <<endl;
}