#include<iostream>
using namespace std;
int main(){
    int i=1,j,number;
    char character=97;
    cin>>number;
    while (i<=number)
    {
        j=0;
        while (j<3)
        {
            cout<<character;
            character+=1;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}