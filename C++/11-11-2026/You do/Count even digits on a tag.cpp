#include<iostream>
using namespace std;
int main(){
    int number,count,q;
    cout<<"Tag number: ";cin>>number;
    do{
        q=number%10;
        if(q%2==0){
            count++;
        }
        number=number/10;
    }while(number>0);
    cout<<"Even Digits = "<<count;
}