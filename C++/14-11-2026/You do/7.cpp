#include<iostream>
#include<string>
using namespace std;
int main(){
    string code,next_line;
    cout<<"Enter the Code: ";cin>>code;
    cout<<"Enter the full description: ";getline(cin.ignore(),next_line);
    cout<<code<<endl<<next_line;
}