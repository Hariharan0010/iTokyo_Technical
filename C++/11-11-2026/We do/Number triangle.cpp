#include<iostream>
using namespace std;
int main(){
    int nmuber,total=0;
    cout<<"How many rows:";cin>>nmuber;
    for(int i=1;i<=nmuber;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
            total+=j; 
        }
        cout<<endl;
        
    }
    cout<<"Total = "<<total;
}