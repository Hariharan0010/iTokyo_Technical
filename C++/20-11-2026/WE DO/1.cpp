#include<iostream>
using  namespace std;
struct participant{
    string name;int Roll_number,Marks;
};
int main(){
    participant input;
    cout<<"Enter Your Name: ";cin>>input.name;
    cout<<"Enter Your Roll number: ";cin>>input.Roll_number;
    cout<<"Enter Your Mark: ";cin>>input.Marks;
    cout<<endl;
    cout<<"Name: "<<input.name<<endl;cout<<"Roll number: "<<input.Roll_number<<endl;cout<<"Mark: "<<input.Marks<<endl;
}