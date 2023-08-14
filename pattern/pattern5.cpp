#include<iostream>
using namespace std;
int main(){
    int number,i=0,j=0,count=1;
    cin>>number;
    while (i<number)
    {
        j=0;
        while (j<3)
        {
            cout<<count<<'\t';
            count++;
        }
        i++;
        cout<<endl;
    }
    
    return 0;
}