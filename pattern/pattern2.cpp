#include<iostream>
using namespace std;
int main(){
    int number,i=0,j;
    cin>>number;
    while (i<number)
    {
        // cout<<i<<endl;
        j=0;
        while (j<3)
        {
            cout<<j+1;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}