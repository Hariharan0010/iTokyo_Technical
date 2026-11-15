#include<iostream>
using namespace std;
int main(){
    int days=1200;
    int years=days/365;days%=365;int months=days/30;days%=30;
    cout<<"Years: "<<years<<" Months: "<<months<<" Days:"<<days;
}