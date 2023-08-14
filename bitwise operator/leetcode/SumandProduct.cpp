#include<iostream>
using namespace std;
int main(){
    cout<<"hello world ! ";
    int number = 234,product=1,sum=0;

    while (number!=0)
    {
        int remainder=number%10;
        sum=sum+remainder;
        product = product*remainder;
        number=number/10;

    }
    cout<<product-sum;

    return 0;
}