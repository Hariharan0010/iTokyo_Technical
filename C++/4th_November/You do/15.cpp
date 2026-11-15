#include<iostream>
using namespace std;
int main(){
    int liter=40,liter_per_min=12,min=10,liter_used=35,left;
    left=(liter_per_min*min)-liter_used+liter;
    cout<<"The water left in the tank is "<<left<<"lts";

}