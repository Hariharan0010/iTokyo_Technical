#include<iostream>
using namespace std;
int totalSaving(int days);
int main(){
    int days;
    cout<<"Enter the No. of Days: ";cin>>days;
    if(days==0||days<=30){
        cout<<"Total amount Saved: "<<totalSaving(days)<<" rupees";
    }else{
        cout<<"Just enter the Correct Number of DAys.";
    }
}
int totalSaving(int days){
    int sum=0;
    for(int i=0;i<=days;i++){
        sum+=i*5;
    }
    return sum;
}