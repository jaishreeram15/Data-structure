#include<iostream>
using namespace std;
int main(){
    int number,i=0,j;
    cin>>number;
    while (i<number)
    {
        while (j<3)
        {
            cout<<i<<'\t';
            j++;
        }
        
        i++;
    }
    
    
    return 0;
}
