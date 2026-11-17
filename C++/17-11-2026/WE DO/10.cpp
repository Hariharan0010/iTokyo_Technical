#include<iostream>
using namespace std;
int parcelCharge(int parcels); 
int parcelCharge(int parcels, int fee);
int main(){
    int parcel,fee;
    cout<<"Enter the No. of Parcels: ";cin>>parcel;
    cout<<"Enter the Handling fee: ";cin>>fee;cout<<'\n';
    cout<<"The total Charge without Handling fee: "<<parcelCharge(parcel)<<'\n';
    cout<<"The total Charge with Handling fee: "<<parcelCharge(parcel,fee);
}
int parcelCharge(int parcels){
    return parcels*10;
}
int parcelCharge(int parcels,int fee){
    return (parcels*10)+fee;
}