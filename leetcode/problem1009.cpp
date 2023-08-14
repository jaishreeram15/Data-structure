#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int number=2100,count=0,sum=0;
    while (number!=0)
    {
        int one=1;
        for (int i=0;i<count;i++){
            one=one*10;
        }
        // cout<<one<<endl;
        int shift =number&1;
        sum = sum+one*shift;
        number=number>>1;
        count++;
    }
    cout<<sum<<endl;
    // count=0;
    // int bin = 1, sum2 = 0;
    // while (sum!=0)
    // {
    //     int remainder = sum%10;
    //     // pow();
    //     cout<<remainder;
    //     if(remainder==0){
    //         sum2 = sum2+pow(2,count);
    //     }
        

    //     // cout<<sum<<endl;
    //     count++;
    //     sum=sum/10;
        
    // }
    // cout<<endl;
    // cout<<sum2;
}