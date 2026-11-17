#include<iostream>
using namespace std;
void prindOrder(int items){
    int q;
    if(items>10){
        q=items/10;
        cout<<q<<"/"<<items;
    }else{
        cout<<items;
    }
    
}
int main(){
    int items;
    cout<<"Enter the no. of items: ";cin>>items;
    prindOrder(items);
    
}