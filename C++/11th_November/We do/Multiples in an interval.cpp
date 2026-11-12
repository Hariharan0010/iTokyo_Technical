
#include<iostream>
using namespace std;
int main(){
    int number,count=0;
    cout<<"Enter the number: ";
    cin>>number;
    for(int i=1;i<=number;i++){
       if(i%3==0){ cout<<i<<endl;count++;}
        
    }
    cout<<"Count = "<<count;
}