#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first number: ";cin>>a;
    cout<<"Enter the second number: ";cin>>b;
    
    for(int i=1;i<=(a*b);i++){
        if(i%a==0 &&i%b==0){
            cout<<"LCM = "<<i;
            break;
        }
    }
}