#include<iostream>
using namespace std;
int main(){
    int count,target,arr[6]={21, 35, 21, 44, 21, 50};
    cout<<"Enter the target: ";cin>>target;
    for(int i=0;i<size(arr);i++){
        if(arr[i]==target){
            cout<<"The Target value is found at the index  number: "<<i<<endl;
            count+=1;
        }
    }
    
    if(count==0){
        cout<<"Match not found.";
    }else{
        cout<<"MAtch count: "<<count;
    }
}
