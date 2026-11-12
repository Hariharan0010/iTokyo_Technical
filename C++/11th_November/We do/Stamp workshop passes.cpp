#include<iostream>
using namespace std;
int main(){
    int number,count=0;
    cout<<"Participants = ";
    cin>>number;
    for(int i=1;i<=number;i++){
        cout<<i<<endl;
        count++;
    }
    cout<<"Passes stamped = "<<count;
}