#include<iostream>
using namespace std;
int main(){
    int km;
    cout<<"Entert the Distance in Km: ";
    cin>>km;
    if(0<=km && km<=10000){
        cout<<"Meters = "<<km*0.621371;
    }else{
        cout<<"Invalid Range of Value";
    }
}