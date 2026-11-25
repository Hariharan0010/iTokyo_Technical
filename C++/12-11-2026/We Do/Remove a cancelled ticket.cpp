#include<iostream>
using namespace std;
int main(){

    int holder[5]={10,15,20,30};
    int cancled_ticket =15;
    int place_of_the_cancled_tickect{};
    
    for(int i=0;i<size(holder);i++){
        if(holder[i]==cancled_ticket){
            place_of_the_cancled_tickect=i;
            break;
        }
    }
    
    for(int i =place_of_the_cancled_tickect;i<size(holder)-1;i++){
        holder[i]=holder[i+1];
    }

    cout<<"The Holder Contains: "<<" ";
    for(int i=0;i<size(holder);i++){
        if(holder[i]!=0){cout<<holder[i]<<" ";}
    }
}