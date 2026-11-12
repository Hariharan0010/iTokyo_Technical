#include<iostream>
using namespace std;
int main(){
    int n,count;
    cout<<"Enter the Upper Limit value: ";cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%j==0){
                count+=1;
            }
            
        }
        if(count==3){
                cout<<i;
            }
    }
    
}
