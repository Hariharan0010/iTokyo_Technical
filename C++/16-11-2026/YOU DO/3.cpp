#include<iostream>
using namespace std;
void sayHello(string a);
int main(){
    string a;
    cout<<"Enter your name: ";getline(cin,a);
    sayHello(a);
}


void sayHello(string a){
    cout<<"Hello,"<<a<<"!";
}