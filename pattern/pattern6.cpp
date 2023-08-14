#include<iostream>
using namespace std;
int main(){
    int row,i=0,j;
    cout<<"enter the number of rows";
    cin>>row;
    
    while (i<row){
        j=0;
        while (j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}