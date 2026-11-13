#include<iostream>
using namespace std;
int main(){
    int IDs[6]={41, 72, 15, 72, 60, 72},target,count=0;
    cout<<"Enter the Target: ";cin>>target;    bool flag=false;
    for(int i=0;i<size(IDs);i++){
        if(IDs[i]==target){
            cout<<i<<" ";
            count++;            
        }
    }
    cout<<"Count: "<<count;
}