#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the 1st number: ";
    cin>>a;
    cout<<"Enter the 2nd number: ";
    cin>>b;
    if(a>b){
        cout<<"Smallest = "<< b;
    }else if(b>a){
        cout<<"Smallest = "<<a;
    }else{
        cout<<"Smallest = "<<a;
    }
}