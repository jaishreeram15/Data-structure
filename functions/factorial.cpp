#include<iostream>
using namespace std;
int main(){
    cout<<"hello world !"<<endl;
    int number=4,product=1;
    while (number>1)
    {
        product=product*number;
        number--;
    }
    cout<<product;

    return 0;
}