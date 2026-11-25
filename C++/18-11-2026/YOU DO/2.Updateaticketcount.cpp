#include<iostream>
using namespace std;
int main(){
    int initial_ticket_count,sold_no_of_tickects;
    cout<<"Enter the Initial Tickect Count: ";cin>>initial_ticket_count;
    cout<<"Enter No. of sold tickects: ";cin>>sold_no_of_tickects;
    int* ptr1=&initial_ticket_count;
    int* ptr2=&sold_no_of_tickects;
    cout<<"Remaining Tickect count: "<<abs(*ptr1-*ptr2);
}