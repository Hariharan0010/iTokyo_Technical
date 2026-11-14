#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;int count;
    cout<<"Enter your name: ";getline(cin.ignore(),name);
    for(int i=0;i<name.length();i++){
        if(name[i]==' '){
            count++;
        }
    }
    cout<<"The no. of space availabe in your give name is "<<count;
}