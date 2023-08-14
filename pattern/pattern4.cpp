#include<iostream>
using namespace std;
int main(){
    int number,i=0,j;
    cin>>number;

    while (i<number)
    {
        j=0;
        while (j<number)
        {
            cout<<j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}