#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,int> bharat;
    int arr[] = {1,2,2,1,1,3};
    int size = sizeof(arr)/sizeof(int);

    for (int i = 0; i < size; i++)
    {
        auto address = bharat.find(arr[i]);
        if(address==bharat.end()){
            bharat[arr[i]]=1;
        }
        else{
            bharat[arr[i]]=bharat[arr[i]]+1;
        }
    }
    
    for (auto x=bharat.begin();x!=bharat.end();++x){
        // cout<< x->first<<endl;
        int count=0;
        for (auto m=x;m!=bharat.end();++m){
            cout<< m->second <<endl;
            if (m->second==x->second)
            {
                count++;
            }
            
            if(count>1){
                return 0;
            }
        }
        cout<<endl;
    }
    return 1;
}