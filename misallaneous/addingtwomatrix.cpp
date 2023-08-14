#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter the number of rows ::";
    cin>>row;
    cout<<"enter the number of col ::";
    cin>>col;
    int arr[row][col],arr2[row][col],resultMatrix[row][col];
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            // cout<<"hi"<<'\t';
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            // cout<<"hi"<<'\t';
            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }


    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            // cout<<"hi"<<'\t';
            cin>>arr2[i][j];
        }
        cout<<endl;
    }

    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            // cout<<"hi"<<'\t';
            cout<<arr2[i][j]<<'\t';
        }
        cout<<endl;
    }

    for (int i=0;i<row;i++){
            for (int j=0;j<col;j++){
                // cout<<"hi"<<'\t';
                resultMatrix[i][j]=arr[i][j]+arr2[i][j];
            }
            cout<<endl;
        }

    cout<<"REASULT MATRIX"<<endl;
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            // cout<<"hi"<<'\t';
            cout<<resultMatrix[i][j]<<'\t';
        }
        cout<<endl;
    }
    
    
    return 0;
}