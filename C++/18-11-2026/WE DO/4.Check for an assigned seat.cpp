#include<iostream>
using namespace std;
int main(){
    int seat_number;
    cout<<"Enter the seat number:";cin>>seat_number;
    if(seat_number>=0&&seat_number<=50){
        int* ptr=&seat_number;
        if(seat_number==0){
           ptr = nullptr;
        }
        if(ptr!=NULL){
            cout<<"The Entered seat number: "<<*ptr;
        }else{
            cout<<"The Seats are empty.";
        }

    }  

} 
