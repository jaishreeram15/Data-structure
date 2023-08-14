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
            cout<<j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
    

    return 0;
}