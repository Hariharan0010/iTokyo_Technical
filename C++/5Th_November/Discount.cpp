#include <iostream>
using namespace std;
int main(){
    int bill,amount;
    cout<<"Enter the amount: ";cin>>amount;if(amount>1000){
        bill=amount-(amount*0.1);
        cout<<"The final bill after the 10%"<<" discount is:"<<bill; 
    }else{
        cout<<"The final bill amount is "<<amount
        ;
    }
}