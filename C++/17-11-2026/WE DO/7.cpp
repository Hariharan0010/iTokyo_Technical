#include<iostream>
using namespace std;
int twice(int amount);
double twice(double amount);
int main(){
    int a;
    double b;
    cout<<"Enter the Interger value: ";cin>>a;cout<<"Same as in Decimal value: ";cin>>b;
    cout<<"The Double the time of given Integr value and Decimal value is: "<<twice(a)<<" & "<<twice(b);
}
int twice(int amount){
    return 2*amount;
}
double twice(double amount){
    return 2*amount;
}