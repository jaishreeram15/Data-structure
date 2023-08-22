#include<iostream>
using namespace std;

int Reverse(int size,int arr[]){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    int last,swap;
    for (int i = 0; i < size; i++)
    {
        last = size-i;
        if(last<=i){
            break;
        }
        swap = arr[last];
        arr[last]=arr[i];
        arr[ i ] = swap;
    }
    cout<<endl;
     for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return arr[size];
}




int main(){
    int arr[]={5,45,14,20,71,3,1,23,29};
    int size = sizeof(arr)/sizeof(int);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<< " ";
    }
    Reverse(size,arr);


}