#include<iostream>
using namespace std;
int main(){
    int number,q,r,count;
    cout<<"Give me the Starting number: ";
    cin>>number;
    count=0;
    while(number>9){
        q=number/10;
        r=number%10;
        number=q*r;
        count+=1;
    }
    cout<<"Final Digit = "<<number<<endl;
    cout<<"Rounds: "<<count;
    

}