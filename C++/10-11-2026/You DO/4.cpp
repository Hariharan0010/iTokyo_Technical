#include<iostream>
using namespace std;
int main(){
    int base,exponent,num;
    cout<<"Base: ";cin>>base;cout<<"Exponent: ";cin>>exponent;
    num=1;
    for(int i=0;i<exponent;i++){
        num*=base;
    }
    cout<<num;
}
