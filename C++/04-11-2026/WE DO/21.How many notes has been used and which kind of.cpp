#include<iostream>
using namespace std;
int main(){
    int amount=7384, count1=0,count3=0,count2=0,count4=0;
    cout<<"Amount Needed: "<<amount<<endl;
    /*while(amount>9){
        if (amount>499)
        {
            amount-=500;
            count1++; 
        }else if(amount<500 && amount>99){
            amount-=100;
            count2++;
        }
        else if(amount<100 && amount>49){
            amount-=50;
            count3++;
        }else if(amount<50 && amount>9){
            amount-=10;
            count4++;
        }
    }
 1st method.       
    */
   while(amount>9){if(amount>=500){
    count1=amount/500;
    amount%=500;
   }else if(amount>=100){
    count2=amount/100;
    amount%=100;
   }else if(amount>=50){
    count3=amount/50;
    amount%=50;
   }else if(amount>=10){
    count4=amount/10;
    amount%=10;
   }    }
   
   


    cout<<"No. of 500 rupees: "<<count1<<" No. of 100 rupees: "<<count2<<" No. of 50 rupees: "<<count3<<" No. of 10 rupees: "<<count4<<" and The Remaining amount : "<<amount;

}