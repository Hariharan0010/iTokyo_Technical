#include<iostream>
using namespace std;
int main(){
    int num,count;
    cout<<"Upper Limit = ";
    cin>>num;
    for(int i=2;i<=num;i++){
        count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            cout<<i<<endl;
        }
        
    }

    cout<<"Prime cards = "<<count;
}