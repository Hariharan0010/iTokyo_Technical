#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,34,5,6};
    for(int i=0;i<size(arr);i++){
      cout<<"The Address where the Index["<<i<<"] is stored: "<<&arr[i]<<'\n';
    }   
}