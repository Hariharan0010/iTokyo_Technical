#include<iostream>
using namespace std;
int main(){
    int n,c,count;
    cout<<"Pages: ";cin>>n;cout<<"Capacity: ";cin>>c;
    while(n>0){
        if(n>=c){
            n=n-c;
            cout<<"Pages Remaining = "<<n<<endl;
            count+=1;
        }else{
            n=n-n;
            cout<<"Pages Remaining = "<<n<<endl;
            count+=1;
        }
    }
    cout<<"Batches = "<<count;
}