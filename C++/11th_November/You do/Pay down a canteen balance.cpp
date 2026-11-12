#include<iostream>
using namespace std;
int main(){
    int bal,pay_limit,count=0;
    cout<<"Balance: ";cin>>bal;
    cout<<"Payment Limit: ";cin>>pay_limit;
    while(bal>0){
        if(bal>19){
            bal-=20;
            cout<<"20"<<endl;
        }else{
            cout<<bal<<endl;
            bal-=bal;
        }
        count++;
    }
    cout<<"Visits: "<<count;

}