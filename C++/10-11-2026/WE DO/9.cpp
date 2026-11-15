#include<iostream>
using namespace std;
int main(){
    int n,count=0,rem;
    cout<<"Enter the Number: ";cin>>n;
    while(n>0){
        n/=10;
        count++;
    }
    cout<<count;
}   