#include <iostream>
using namespace std;
int  main(){
    int position,n;
    cin>>n;
    int arr[5]={10,20,30,0,0};
    for(int i=(size(arr)-1);i>=0;i--){
        cout<<arr[i]<<endl;
    }
    for(int i=(size(arr)-1);i>=0;i--){
        if(arr[i]==10){
            position=i;
            cout<<"Position of 10 is "<<i;
        }
    for(int i =0;i<size(arr);i++){
        if(i>position){
            arr[i+1]=arr[i];
        }
    }
    for(int i =0;i<size(arr);i++){
        cout<<arr[i]<<endl;
    }
    }
}