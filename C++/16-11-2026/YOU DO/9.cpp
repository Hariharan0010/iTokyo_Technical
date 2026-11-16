#include<iostream>
using namespace std;
int countDigits(int tickets);
int main(){
    int ticket;
    cout<<"Enter the Ticket number: ";cin>>ticket;
    cout<<"The No. of Digits in the Given Ticket Number is "<<countDigits(ticket);
}

int countDigits(int tickets){
    tickets=abs(tickets);
    int count =0;
    if(tickets==0){
        count=1;
    }else{
        while(tickets>0){
         tickets/=10;
         count++;
        }
    }
    
    return count;
}