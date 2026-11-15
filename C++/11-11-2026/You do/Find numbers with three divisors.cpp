#include<iostream>
using namespace std;
int main(){
    int n,count,count2=0;
    cout<<"Enter the Upper Limit value: ";cin>>n;
    for(int i=1;i<n;i++){
        count=0;
        for(int j=1;j<n;j++){
            if(i%j==0){
                count+=1;
            }
            
        }
        if(count==3){
                cout<<i<<'\n';
                count2=count;
            }
    }
    cout<<"Matches: "<<count2;
}
