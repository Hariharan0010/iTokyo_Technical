#include<iostream>
#include<cmath>
using namespace std;
int temperatureGap(int first, int second){
    return abs(first-second);
}
int main(){
    int a,b;
    cout<<"Enter the First Temperature: ";cin>>a;
    cout<<"Enter the Second Temperature: ";cin>>b;
    cout<<"The Temperature difference between the Given Datas is "<<temperatureGap(a,b);
}