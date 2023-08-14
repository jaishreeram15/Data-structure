#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter the number ::";
    cin>>number;
    int i=2,count=0;
    while (number>i){
        if(number%i==0){
            count=count+1;
            break;
        }
        i++;
    }
    if(count==0){
        cout<<"Prime ! ";
    }
    else{
        cout<<"Not print";
    }
    return 0;
}