#include<iostream>
#include<map>
using namespace std;
int main(){
    map<char,int> mp1;
    // mp1["b"] = 1;
    // cout<<mp1["bharat"]<<endl;
    // return 0;
    mp1.insert(pair<char,int>('a',4));
    mp1.insert(pair<char,int>('z',5));
    mp1.insert(pair<char,int>('x',6));
    mp1.insert(pair<char,int>('c',7));
    mp1.insert(pair<char,int>('v',8));
    cout<<mp1['v'];
    for (auto itr = mp1.begin(); itr!=mp1.end(); ++itr)
    {
        
        if((*itr).first=='c'){
            cout<<itr->second <<endl;
        }
    }
    int number;
    // cout<<"enter the number of enteries ! ::"<<endl;
    // cin>>number;
    // char alpha;
    // int value;
    // for (int i = 0; i < number; i++)
    // {
    //     cout<<"enter the key :"<<endl;
    //     cin>>alpha;
    //     cout<<"enter the value :"<<endl;
    //     cin>>value;
    //     mp1[alpha]=value;
    // }
    // for (auto itr = mp1.begin(); itr!=mp1.end(); ++itr)
    // {
        
    // //    if((*itr).first=='c'){
    //         cout<<itr->first<<"\t\t";
    //         cout<<itr->second <<endl;
    //     // }
    // }
    for(auto x:mp1){
        cout<<x.first<<"\t";
        cout<<x.second<<endl;
    }
    return 0;
}