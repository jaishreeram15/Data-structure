#include<iostream>
using namespace std;
int main(){
    int row,i=1,j,count=1;
    cin>>row;
    while(row>=i){
        
        j=0;
        while (j<i)
        {
            cout<<i+j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}