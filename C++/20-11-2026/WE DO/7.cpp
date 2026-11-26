#include<iostream>
using namespace std;
class tickect{

    private:
       int price;
    public:
        tickect(){
            price=50;
        }
        tickect(int p){
            price = p;
        }
        int getPrice(){
            return price;
        }

};
int main(){
        int sp;
        cout<<"Special price: ";cin>>sp;
        tickect standard_ticket,specilaTicket(sp);
        cout<<"Standard Price: "<<standard_ticket.getPrice()<<" | Special Price: "<<specilaTicket.getPrice();

}