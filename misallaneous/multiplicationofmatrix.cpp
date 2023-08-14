#include<iostream>
using namespace std;
int main(){
    int row,col;
    cin>>row;
    cin>>col;
    fflush(stdin);
    int arr[row][col],arr2[row][col],result[row][col];
    cout<<"now enter value in arr1"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[row][col];
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"now enter value in arr2"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr2[row][col];
        }
        cout<<endl;
    }
    fflush(stdin);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr2[row][col];
        }
        cout<<endl;
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            int sum=0;
            for (int k=0;k<3;k++){
                sum=arr[i][k]*arr2[k][j]+sum;
            }
            result[i][j]=sum;
        }
        cout<<endl;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<result[row][col]<<"fafdsa"<<'\t';
        }
        cout<<endl;
    }
    return 0;
}