#include<iostream>
using namespace std;
int main(){
    int a= 0,b=1,number,result;
    cin>>number;
    for (int i = 1; i <=number ; i++)
    {
        if(i==1){
            cout<<a<<" ";
            // cout<<i<<endl;
        }
        if (i==2)
        {

            cout<<b<<" ";
            // cout<<i<<endl;
        }
        else{
            result=a+b;

            cout<<result<<" ";
            // cout<<i<<endl;
            a=b;
            b=result;
        }

    }
    
    return 0;
}