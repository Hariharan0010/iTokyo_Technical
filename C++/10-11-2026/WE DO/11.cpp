#include<iostream>
using namespace std;
int main(){
    int n,revers=0;
    cout<<"Enter the Number: ";cin>>n;
    while(n>0){
        revers=revers*10+(n%10);
        n/=10;
    }
    cout<<revers;
}   