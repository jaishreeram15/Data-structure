#include<iostream>
#include<map>
using namespace std;
int main(){
    map<char,int> mp1;
    mp1.insert(pair<char,int>('b',7));
    mp1.insert(pair<char,int>('a',8));
    mp1.insert(pair<char,int>('c',9));
    mp1.insert(pair<char,int>('d',78));
    mp1.insert(pair<char,int>('e',79));
    mp1.insert(pair<char,int>('f',98));
    for (auto itr = mp1.begin(); itr !=mp1.end(); ++itr)
    {
        // cout<<<<"   ";
        if(itr->first=='e'){
            itr->second=itr->second+1;
            for (auto termi = itr; termi != mp1.end(); ++termi)
        {
            cout<<termi->first<<"   ";
            cout<<termi->second<<endl;
        }
        }
    }
    



    return 0;
}