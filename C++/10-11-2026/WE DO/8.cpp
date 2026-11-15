#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,temp;
    cout<<"Enter the Number: ";cin>>n;
    while(n>0){
        cout<<a<<' ';
        temp=a;
        a=b;
        b=temp+b;
        n--;
    }
}   