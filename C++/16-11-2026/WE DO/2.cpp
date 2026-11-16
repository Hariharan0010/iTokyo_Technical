#include<iostream>
#include<string>
using namespace std;
void Greeting(string a){
    cout<<"Hello,"<<a<<"!";
}
int main(){
    string a;
    cout<<"Enter Your name: ";getline(cin,a);
    Greeting(a);
}