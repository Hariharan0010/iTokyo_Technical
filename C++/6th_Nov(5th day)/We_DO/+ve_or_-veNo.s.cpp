#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number to ind wether it's Negative or Positive: ";
    cin>>number;
    if (number>=0){
        cout<<"It's a Positive number.";
    }else{cout<<"It's a Negative number.";}
}