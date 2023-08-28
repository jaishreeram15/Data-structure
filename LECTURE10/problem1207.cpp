#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,int> bharat;
    // int arr[] = {-3,0,1,-3,1,1,1,-3,10,0};
    // int size = sizeof(arr)/sizeof(int);

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
    for (auto i = bharat.begin(); i !=bharat.end(); ++i)
    {
        int count=0;
        // cout<<i->first<<"   "<<i->second<<endl;
        for (auto j = i; j !=bharat.end(); ++j)
        {
            // cout<<i->first<<"   "<<i->second<<"\t"<<j->first<<"    "<<j->second<<endl;
            if(i->second==j->second){
                count++;
            }
        }
        if(count>1){
            cout<<"not unique occurence"<<endl;
            break;
        }
    }
    
    return 0;
}