#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number";
    int number;
    int result;
    cin>>number;
    int a=0,b=1;
    for(int i =0;i<number;i++  ){
        if(i==0 ){
            cout<<a<<" ";
        } 
        if(i==1){
            cout<<b<<" ";
        }
        result=a+b;
        cout<<result<<" ";
        a=b;
        b=result;
    }
    return 0;
}