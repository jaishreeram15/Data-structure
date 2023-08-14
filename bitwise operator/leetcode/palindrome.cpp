#include<iostream>
using namespace std;
int main(){
    int number=123,remaider=0;
    while (number!=0)
    {
        remaider = (remaider*10)+(number%10);
        number = number / 10;
    }
    cout<<remaider;
    return 0;
}