#include<iostream>
using namespace std;
int main(){
    int n,count=0,sum=0;
    cout<<"Enter the Number: ";cin>>n;
    while(n>0){
        sum+=n%10;
        n/=10;
        count++;
    }
    cout<<sum;
}   