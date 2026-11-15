#include <iostream>
using namespace std;
int main(){
    int num,sum,remainder,count;
    cout<<"Enter the 4 digit number: ";
    cin>>num;
    count = 4;
    sum=0;
    if(num>999 && num<10000){
        while(count>0){
            remainder=num%10;
            sum+=remainder;
            num=num/10;
            count--;
        }
        cout<<"The sum of the given four Digit Number is "<<sum<<endl;
    }else{
        cout<<"Please enter the four digit number";
    }
}