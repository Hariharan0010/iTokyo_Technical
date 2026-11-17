#include<iostream>
using namespace std;
void printdemo(){
    int a;
    cin>>a;
    if(a>=0&&a<=100){
        cout<<"3/"<<a;
    }else{
        cout<<"Error!!!";
    }
    
}
int main(){
    printdemo();
}
