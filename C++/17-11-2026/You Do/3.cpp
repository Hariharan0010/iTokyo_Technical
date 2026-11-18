#include<iostream>
using namespace std;
int payableAmount(int bill);
int main(){
    int bill;
    cout<<"Enter the Bill Amount: ";cin>>bill;
    if(bill>=500){
        cout<<"The Final Amount after the Discount: "<<payableAmount(bill);        
    }else{
        cout<<"The Final to be paid is: "<<bill;
    }
}
int payableAmount(int bill){
    return bill-50;
}