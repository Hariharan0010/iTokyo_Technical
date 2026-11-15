#include<iostream>
using namespace std;
int main(){
    int LitersPerMiniute,TotalMinutes,leakage,TotalLiters;
    cout<<"Enter the liters per minute: ";
    cin>>LitersPerMiniute;
    cout<<"Enter the total minutes: ";
    cin>>TotalMinutes;
    cout<<"Enter the leakage in liters: ";
    cin>>leakage;
    TotalLiters= (LitersPerMiniute*TotalMinutes)-leakage;
    cout<<"Total Liters in the tank right now is: "<<TotalLiters<<endl;
}