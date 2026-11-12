#include<iostream>
using namespace std;
int main(){
    int arr[5]={28,31,26,30,29};
    arr[2]=30;
    cout<<"The Corrected Attendance is ---> "<<"[";
    for(int i=0;i<(size(arr));i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}