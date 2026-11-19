#include<iostream>
using namespace std;
int main(){
    int x=10,b=20;
    cout<<x<<endl;
    int* ptr=&x;
    cout<<ptr<<endl;
    *ptr=20;
    cout<<ptr<<endl;
    cout<<x;
    int* ptr2=&b;
    cout<<ptr2;
    b=30;
    cout<<ptr2;
    cout<<b<<endl;
}