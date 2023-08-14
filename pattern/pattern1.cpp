#include<iostream>
using namespace std;
int main(){
    int number,i=0;
    cin>>number;
    while (i<number)
    {
        int j=0;
        while (j<4)
        {
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
    
    return 0;
}