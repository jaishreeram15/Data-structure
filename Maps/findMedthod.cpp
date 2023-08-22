#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string> student;
    student[1] = "Jacqueline";
    student[2] = "Blake";
    auto iter = student.find(120);
    if(iter != student.end()){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}