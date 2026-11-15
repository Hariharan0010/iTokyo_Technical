#include<iostream>
using namespace std;
int main(){
    int year=1900;
    if((year%4==0 && year%100!=0)||(year%400==0)){
        cout<<"The Given year is Leap year.";
    }else{cout<<"The Given year is not a Leap year.";}
}