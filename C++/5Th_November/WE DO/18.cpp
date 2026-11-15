#include<iostream>
using namespace std;
int main(){
    int locker_code=4827,sum=0;
    while(locker_code>0){
        sum+=locker_code%10;
        locker_code/=10;
    }
    cout<<"The Sum of give 4 digits of the Locker code is "<<sum;
}