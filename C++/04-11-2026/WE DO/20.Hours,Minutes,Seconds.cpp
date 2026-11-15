#include<iostream>
using namespace std;
int main(){
    int sec=7384;
    int minutes=sec/60;
    int hours=minutes/60;
    minutes=minutes%60;
    sec%=60;
    cout<<"Hours: "<<hours<<" Minutes: "<<minutes<<" Seconds: "<<sec;
    
}