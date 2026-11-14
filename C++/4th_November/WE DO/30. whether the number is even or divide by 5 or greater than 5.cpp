#include<iostream>
using namespace std;
int main(){
    int number=4826,lastdigit=0;
    if(number%2==0){
        cout<<"The given Number is even"<<endl;
    }else{cout<<"The given Number is odd."<<endl;}
    if(number%5==0){
        cout<<"The Given Number is Multiple of 5"<<endl;
    }
    else{cout<<"Not a Multiple of 5."<<endl;}
    lastdigit=number%10;
    if(lastdigit>5){
        cout<<"Yes it's Last digit is Greater than 5."<<endl;
    }else{
        cout<<"No the Last digit is not Greater than 5."<<endl;
    }
    
}