#include<iostream>
using namespace std;
int main(){
    int arr[6],delivery_count;
    for(int i=0;i<size(arr);i++){
        cout<<"Delivery Count: ";cin>>delivery_count;
        arr[i]=delivery_count;
    }
    cout<<"The first and last counts are: ";
    for(int i=0;i<size(arr);i++){
        if(i==0 || i==(size(arr)-1)){
            cout<<arr[i]<<" ";
        }
    }
    cout<<" and "<<endl;
    cout<<"The Reversed Array would be:"<<endl;
    for(int i=size(arr)-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}