#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    cout<<"Enter Your name: ";
    //cin>>name;
    //cout<<"Your name is "<<name<<endl;
    getline(cin,name);
    cout<<"Your full name is "<<name;
}