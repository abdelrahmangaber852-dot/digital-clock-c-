#include<iostream>
using namespace std;
#include<windows.h>  // دي المكتبه الخاصه بامر سلييب
int main()
{
    //variables استخدمت int عشان ارقام صحيحة
    int hours=0;
    int min=0;
    int sec=0;
    //end of variables
    cout<<"hours : ";
    cin>>hours;

    cout<<"min : ";
    cin>>min;

    cout<<"sec : ";
    cin>>sec;
    
    while(true){

        system("cls"); //اختصار ل clear screen

        if(sec>59) {min++;sec=0;}
        if(min>59) {hours++; min=0;}
        if(hours>23){hours=0;}

    cout<<hours<<":"<<min<<":"<<sec;

    sec++; //علشان الثواني تفضل تزيد

    Sleep(900);  //المكتبه بتاعتها <windows.h>
    
    }

    




}








