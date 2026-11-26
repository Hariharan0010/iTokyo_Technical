#include<iostream>
using namespace std;
class Wallet{

    private:
        int balance;
    public:
        Wallet(int b){
            balance=b;
        }
        bool topup(int amount){
            if(amount>0 && amount<=1000 && balance>=0&&balance<=1000){
                int total = amount+balance;
                if(total>0 && total<=1000){
                    balance=amount+balance;
                    return true;
                }
            }else{
                return false;
            }
        }

        bool purchase(int amount){  
            if(amount<balance){
                balance=balance-amount;
                return bal
            }
        }
};