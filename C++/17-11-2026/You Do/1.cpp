#include<iostream>
using namespace std;
int previewTicketPrice(int price);
int main(){
    int a;
    cout<<"Enter the prize: ";cin>>a;
    
    if(a>=0&&a<=1000){
        cout<<"Ticket Prize before adding a fee: "<<a<<endl;
        cout<<"Ticket Prize after adding a fee: "<<previewTicketPrice(a);
    }
    
}
int previewTicketPrice(int price){
    return price+20;
}