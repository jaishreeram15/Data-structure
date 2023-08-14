#include<iostream>
using namespace std;

int main(){
    // char variable;
    // variable=98;
    // cout<<variable;
    // int check;
    // check = 'a';
    // cout<<check;

    int check;
    check = 'i';
    // cout<<check;
    if(check>=97 && check<=122){
        cout<<"this is lower case Text"<<endl;
    }

    if(check>=65 && check<=90){
        cout<<"this is upper case Text"<<endl;
    }
    if(check>=48 && check<=57){
        cout<<"this is number"<<endl;
    }
    else{
        cout<<"this is special character";
    }

    return 0;
}