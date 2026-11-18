#include<iostream>
using namespace std;
int main(){
    int IDs[6]={101,102,103,104,105};
    int index;cout<<"Index: ";cin>>index;
    for(int i=index;i<size(IDs);i++){
        IDs[i]=IDs[i+1];
    }
    cout<<"Current IDs: ";
    for(int i=0;i<size(IDs)-1;i++){
        if(IDs[i]!=0){cout<<IDs[i]<<" ";}
        
    }
}