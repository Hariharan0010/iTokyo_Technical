#include <iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter the 1st number:";
    cin>>n1;
    cout<<"Enter the 2nd number:";
    cin>>n2;
    if(n1>n2){
        cout<<"Greatest = "<<n1;
    }else if(n2>n1){
        cout<<"Greatest = "<<n2;
    }else{
        cout<<"Greatest = "<<n2;
    }
}