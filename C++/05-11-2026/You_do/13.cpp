#include<iostream>
using namespace std;
int main(){
    int celsius=36;
    int fahrenheit=(celsius*(9/5))+32;
    cout<<"Fahrenheit when celsius divide by 9/5"<<fahrenheit<<'\n';
    fahrenheit=(celsius*(9.0/5))+32;
    cout<<"Fahrenheit when celsius divide by 9.0/5"<<fahrenheit;
}