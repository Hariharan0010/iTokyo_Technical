#include<iostream>
using namespace std;
int main()
{
    int bill=1200;
    if(bill>1000){
        bill=bill-((bill*10)/100);
    }
    cout<<"The Bill After the Discount: "<<bill;
}