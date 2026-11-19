#include<iostream>
using namespace std;
int main(){
    int num;char letter;
    cout<<"Enter the Number: ";cin>>num;
    cout<<"Enter the letter: ";cin>>letter;
    void* ptr=&num;
    cout<<*(int*)ptr<<endl;
    ptr=&letter;
    cout<<*(char*)ptr;
}