#include<iostream>
using namespace std;
int main(){
    int amount=4860,count1=0,count2=0,count3=0,count4=0;
    if(amount>=500){
        count1=amount/500;
        amount%=500;
    } if(amount>=100){
        count2=amount/100;
        amount%=100;
    } if(amount>=50){
        count3=amount/50;
        amount%=50;
    } if(amount>=10){
        count4=amount/10;
        amount%=10;
    }
    cout<<"The ATM Gives "<<count1<<" -> 500 notes "<<count2<<" -> 100 notes "<<count3<<" -> 50 notes and "<<count4<<" -> 10 notes ";
}