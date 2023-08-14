#include<iostream>
using namespace std;
int main(){
    int i=1,j,row;
    cin>>row;
    while (i<=row)
    {
        j=i;
        while (j>0)
        {
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
    




    return 0;
}