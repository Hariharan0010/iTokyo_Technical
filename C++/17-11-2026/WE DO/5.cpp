#include<iostream>
using namespace std;
int hallCapacity=30;
int remainingSeats(int occupied);
int main(){
    int occupied_seats;
    cout<<"Enter the no. of seats occupied: ";cin>>occupied_seats;
    cout<<"The No. of Remaining seats in the hall: "<<remainingSeats(occupied_seats);
}
int remainingSeats(int occupied){
    int fixed_capacity=30;
    return (fixed_capacity-occupied);
}