#include<iostream>
using namespace std;
int Factorial(int number){
    int product=1;
    while (number>1)
    {
        product=product*number;
        number--;
    }
    return product;
}
int main(){
    int n=8,c=2;
    float ans = Factorial(n)/(Factorial(c)*Factorial(n-c));
    cout<<ans;
    return 0;
}