#include<iostream>
using namespace std;
int main(){
    int b=7;
    int number=b|1;
    number=number<<1;
    number=number|1;
    number=number<<1;
    int shif=number|b;
    cout<<shif;
    
    return 0;
}