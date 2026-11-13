#include<iostream>
using namespace std;
int main(){
    int IDs[6]={101, 105, 110, 114};
    for(int i=size(IDs)-1;i>=0;i--){
        if(i>1){
             IDs[i+1]=IDs[i];
        }
        
    }
    IDs[2]=108;
    for(int i=0;i<size(IDs);i++){
        if(i>2){
            IDs[i]=IDs[i+1];
        }
    }
    for(int i=0;i<size(IDs);i++){
        if(IDs[i]!=0){cout<<IDs[i]<<" ";}
    }
}