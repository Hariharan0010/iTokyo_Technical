#include<iostream>
using namespace std;
int main(){
    int bill=2400;
    if(bill>=2000){
        bill=bill-bill*15/100;
    }
    cout<<"Final prize:"<<bill;
}