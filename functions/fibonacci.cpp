#include<iostream>
using namespace std;


int Fibonacci(int number ){
    int a=0;
    int b=1,result;
    if(number==0){
        return 0;
    }
    else if(number==1){
        return 1;
    }
    else{
    for (int i =0;i<number-2;i++){
        result=a+b;
        a=b;
        b=result;
        
    }
    }
    return result;;
}
int main(){
    int number=9;
    int NthNumber=Fibonacci(number);
    cout<<NthNumber;
    return 0;
}