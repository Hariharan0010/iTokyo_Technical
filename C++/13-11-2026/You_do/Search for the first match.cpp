#include<iostream>
using namespace std;
int main(){
    int order[6]={41, 72, 15, 72, 60,92},targeted_ID;
    bool check=false;
    cout<<"Enter the targeted ID: ";cin>>targeted_ID;
    for(int i=0;i<size(order);i++){
        if(order[i]==targeted_ID){
            cout<<"Found at possition no."<<i;
            check=true;
            break;
        }
    }if(!check){
        cout<<"Not Found, -1";
    }

}