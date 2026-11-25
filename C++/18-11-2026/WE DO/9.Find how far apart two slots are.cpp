#include<iostream>
using namespace std;
int main(){
    int arr[6];
    cout<<"Enter the First element: ";cin>>arr[0];
    cout<<"Enter the Second element: ";cin>>arr[1];
    int* ptr = &arr[0];
    int*ptr2=&arr[0+1];
    cout<<"The Distance between the Elements: "<<ptr2-ptr<<'\n';
    cout<<"The Difference betweeen the Values in that address is "<<abs(*ptr-*ptr2);
}