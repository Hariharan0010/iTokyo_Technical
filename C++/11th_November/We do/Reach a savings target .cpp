#include<iostream>
using namespace std;
int main(){
    int target,frist_deposit,week,total;
    cout<<"Target:";
    cin>>target;
    cout<<"Frist_deposit:";
    cin>>frist_deposit;
    week=1;
    total  =frist_deposit;
    while(total<target){
        frist_deposit+=20;
        total+=frist_deposit;
        week+=1;
    }
    cout<<"Weeks = "<<week;
    cout<<"Savings = "<<total;
    

}