#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size){
    int swap;
    if(size%2==0){
    for (int i = 0; i < size; i=i+2)
    {
        swap=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=swap;
    }
    }
    else{
     for (int i = 0; i < size-1; i=i+2)
    {
        swap=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=swap;
    }   
    }
    
}




int main(){
    int arr[]={8,7,5,14,6,3,1};
    int size = sizeof(arr)/sizeof(int);
    swapAlternate(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}