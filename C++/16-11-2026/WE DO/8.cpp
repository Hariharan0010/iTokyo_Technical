#include<iostream>
using namespace std;
int greatestScore(int a,int b,int c){
    if(a>b){
        if(a>c){
            return a;
        }else{
            return c;
        }
    }else{
        return b;
    }
}
int main(){
    int a,b,c;
    cout<<"Enter the First Number: ";cin>>a;
    cout<<"Enter the Second Number: ";cin>>b;
    cout<<"Enter the Third Number: ";cin>>c;
    cout<<"The Greatest of the Given 3 numbers is "<<greatestScore(a,b,c);
}