#include<iostream>
using namespace std;
int sumOfDigits(int a);

int main(){
    int number;
    cout<<"Enter the number: ";cin>>number;
    cout<<"The sum of digits of the given number is: "<<sumOfDigits(number);
}
int sumOfDigits(int a){
    int sum=0;
    while(a>0){    
        sum+=a%10;
        a/=10;
    }
    return sum;
}
