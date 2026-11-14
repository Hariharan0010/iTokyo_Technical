#include <iostream>
#include<string>
using namespace std;
int main(){
    int age;string name;
    cout<<"Enter your age: ";cin>>age;
    //cout<<"Enter your name: ";getline(cin,name);
    cout<<"Enter your name: ";getline(cin.ignore(),name);
    cout<<"Your age is "<<age<<endl;
    cout<<"Your name is "<<name<<endl;
}