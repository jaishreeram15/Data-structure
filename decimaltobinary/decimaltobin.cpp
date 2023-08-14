#include<iostream>
using namespace std;
int main(){
    unsigned int num=7;
    int sum=0,count=0;
    // cout<<num;
    while(num!=0){
        int one=1;
        // int shift=num&1;
        // cout<<shift;
        // num=num>>1;
        // sum=sum+
        for (int i=0;i<count;i++){
            one=one*10;
        }
        cout<<count<<endl;
        int shift = num&1;
        sum = shift*one+sum;
        // cout<<"fdsa: "<<one<<endl;
        count++;
        num=num>>1;
    }
    cout<<sum;
    return 0;
}