#include<iostream>
using namespace std;
int main(){
    int i=0,j,number;
    cin>>number;
    char alpha=97+number;
    while (i<number)
    {
        j=0;
        while (j<=i)
        {
            alpha=alpha-j;
            cout<<alpha;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}