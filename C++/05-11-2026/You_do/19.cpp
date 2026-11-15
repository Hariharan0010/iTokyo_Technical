#include<iostream>
using namespace std;
int main(){
    int sec=5000;
    int hours=(sec/60)/60;
    int min=(sec/60)%60;
    sec=sec%60;
    cout<<" The cyclist completes the race in Hours: "<<hours<<" Minutes: "<<min<<" Seconds: "<<sec;
}