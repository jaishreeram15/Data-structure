#include<iostream>
using namespace std;
int main(){
    int number = 11;
    int res = 4&1;
    int count=0;
    for (int i=0;i<32;i++){
        if(number!=0){
            number=number>>1;
            if (number&1){           
            count++;
            }
        }
        
    }
    cout<<"res:"<<res;
    // 1010
    // 101
    return 0;
}