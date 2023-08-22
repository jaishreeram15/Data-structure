#include<iostream>
using namespace std;
void takinginput(int size,int number[]){
    for (int i=0;i<size;i++){
        cout<<"enter the value index"<<i+1<<"::"<<endl;
        cin>>number[i];
    }
}
void printinarray(int size,int number[]){
    for (int i=0;i<size;i++){
        cout<<"value index"<<i+1<<"::"<<number[i]<<endl;
    }
}

int Max(int size,int number[]){
    int max=INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        if(max<number[i]){
            max=number[i];
        }
    }
    return max; 
}

int Min(int size,int number[]){
    int min=INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        if(number[i]<min){
            min = number[i];
        }
    }
    return min;
}






int main(){
    int size;
    cin>>size;
    int numbers[100];
    takinginput(size,numbers);
    printinarray(size,numbers);
    int var=Max(size,numbers);
    cout<<"max is "<<var<<endl;
    var = Min   (size,numbers);
    cout<<"min is "<<var<<endl;


    return 0;
}