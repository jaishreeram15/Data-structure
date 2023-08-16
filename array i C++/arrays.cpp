#include<iostream>
using namespace std;
void PrintingtheArray(int sizem,int arr[]){
    for (int i =0;i<sizem;i++){
        cout<<"value at"<<i+1<<" is ::"<<arr[i]<<endl;
    }
}
int main(){
    int arr[10];
    cout<<arr[8];
    int arr2[15]={2,3,7};
    PrintingtheArray(15,arr2);

    return 0;
}