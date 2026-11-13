#include<iostream>
using namespace    std;
int main(){
    int sec;
    cout<<"Seconds: ";cin>>sec;
    for(int i=sec;i>0;i--){
        if(i>0){
            cout<<i<<endl;
        }
    }
    cout<<"Curtain open";
}