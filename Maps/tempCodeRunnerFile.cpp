#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string> student;
    student[1] = "Jacqueline";
    student[2] = "Blake";
    auto iter = student.find(120);
    cout<<iter->first<<"\t"<<iter->second;
    if(iter !=student.end()){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}