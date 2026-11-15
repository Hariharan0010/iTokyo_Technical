#include<iostream>
using namespace std;
int main(){
    int n,f,l,count;
    cout<<"Upper Limit: ";cin>>n;
    for(int i=10;i<=n;i++){
        f=i/10;
        l=i%10;
        if(f==l){
            cout<<i<<endl;
            count++;
        }
    }
    cout<<"Matches = "<<count;
}