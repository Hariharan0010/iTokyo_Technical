#include<iostream>
using namespace std;
int productOfDigits(int a,int b){
    int number=a*b;
    return number;
}
int main(){
    int a,count=0,r,q;
    cout<<"Enter the number: ";cin>>a;
    while (a>9)
    {
        r=a%10;
        q=a/10;
        a=productOfDigits(r,q);
        if(a==0){
            break;
        }
        count++;
        
    }
    cout<<"Final digit: "<<a<<", rounds: "<<count;
    
}
