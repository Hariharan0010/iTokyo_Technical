#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the numeber to find wether the given number is 3digit or not: ";
    cin>>n;
    if((n>99 && n<1000)||(n<-99 && n>-1000)){
        cout<<"Yes, it is a three-digit number.";
    }else{
        cout<<"No, it is not a three-digit number.";
    }
}