#include<iostream>
using namespace std;
int main(){
    cout<<"hello world !! "<<endl;
    int number ;
    cin>> number;
    int flag=0;
    for (int i=2;i<number;i++){
        cout<<i<<endl;
        if(number%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"number is prime ";
    }
    else{
        cout<<"number is not prime";
    }


    return 0;
}