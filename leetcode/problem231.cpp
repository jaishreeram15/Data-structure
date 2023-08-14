#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n=1073741825;
    int count=0;
    int power = pow(2,count);
    cout<<power;
    bool flag = false ;
    while (n>=power)
    {
        power = pow(2,count);
        cout<<power<<endl;
        if(power==n){
            flag= true;
            break;
        }
        count++;
    }
    
    return flag;
}