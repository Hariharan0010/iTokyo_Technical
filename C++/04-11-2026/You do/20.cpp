#include<iostream>
using namespace std;
int main(){
    int sec=5000;
    int hours=(sec/60)/60;
    int mins=(sec/60)%60;
    sec=sec%60;
    cout<<"Hours:"<<hours<<" Minutes:"<<mins<<" Seconds:"<<sec;
}