#include<iostream>
using namespace std;
int main(){
    int i=1,j=0,number,count;
    char character;
    cin>>number;
    count=98;
    while (i<=number)
    {
        character=count;
        j=0;
        while (j<3)
        {
            cout<<character<<" ";
            j++;
        }
        cout<<endl;
        count++;
        i++;
    }
    
    return 0;
}