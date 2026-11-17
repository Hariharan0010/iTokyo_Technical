#include<iostream>
using namespace std;
int previewBalance(int balance, int cost);
int main(){
    int balance,cost;
    cout<<"Enter your Balance: ";cin>>balance;cout<<"Enter your cost: ";cin>>cost;
    cout<<"The Amount you had before purchase: "<<balance;
    cout<<"The Amount you have after purchase: "<<previewBalance(balance,cost);
}
int previewBalance(int balance, int cost){
    return balance-cost;
}