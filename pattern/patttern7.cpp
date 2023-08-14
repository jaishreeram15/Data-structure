#include<iostream>
using namespace std;
int main(){
    int i=1,j,number;
    cin>>number;

    while (i<=number)
    {
        j=1;
        while (j<=i)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}