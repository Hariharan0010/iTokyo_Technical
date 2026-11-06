#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    if(a>0){
        a++;
        cout<<"After incrementing the Positive Value: "<<a;
    }else{
        cout<<"It will not be the incremented: "<<a;
    }
}