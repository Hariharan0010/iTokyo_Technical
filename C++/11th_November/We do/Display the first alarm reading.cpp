#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Starting Reading: ";
    cin>>num;
    do{
        cout<<num<<endl;
        num+=2;
    }while(num<=8);
}