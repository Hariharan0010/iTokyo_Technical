#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout<<"Enter the Parcel Code: ";cin>>n;
    while(n>0){
        sum+=(n%10);
        n=n/10;
    }
    cout<<"Digit Sum: "<<sum;
}
