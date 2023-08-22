#include<iostream>
using namespace std;
int main(){
    cout<<"hello world !!";
    int number =70;
    int fig;
    if(number>100){
        fig=100;
    }
    else if(number>50){
        fig=50;
    }else if (number>20)
    {
        fig = 20;
    }
    else{
        fig=1;
    }
    
    switch (fig)
    {
    case 100:
        int quetient;
        quetient=number/fig;
        number=number%fig;
        cout<<"number of "<<fig<<"notes "<<quetient<<endl;
        fig=50;
        quetient=number/fig;
        number=number%fig;
        cout<<"number of "<<fig<<"notes "<<quetient<<endl;
        fig=20;
        quetient=number/fig;
        number=number%fig;
        cout<<"number of "<<fig<<"notes "<<quetient<<endl;
        fig=1;
        quetient=number/fig;
        number=number%fig;
        cout<<"number of "<<fig<<"notes "<<quetient<<endl;
        break;
    case 50:
        fig=50;
        quetient=number/fig;
        number=number%fig;
        cout<<"number of "<<fig<<"notes "<<quetient<<endl;
        fig=20;
        quetient=number/fig;
        number=number%fig;
        cout<<"number of "<<fig<<"notes "<<quetient<<endl;
        fig=1;
        quetient=number/fig;
        number=number%fig;
        cout<<"number of "<<fig<<"notes "<<quetient<<endl;
        break;
    case 20:
        fig=20;
        quetient=number/fig;
        number=number%fig;
        cout<<"number of "<<fig<<"notes "<<quetient<<endl;
        fig=1;
        quetient=number/fig;
        number=number%fig;
        cout<<"number of "<<fig<<"notes "<<quetient<<endl;
        break;
    case 1:
        fig=1;
        quetient=number/fig;
        number=number%fig;
        cout<<"number of "<<fig<<"notes "<<quetient<<endl;
        break;
    default:
        break;
    }
    
    return 0;
}