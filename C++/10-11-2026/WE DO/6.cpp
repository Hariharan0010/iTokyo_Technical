#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"Enter the number: ";cin>>n;
    
    if(n<0){
        cout<<"Invaild Number for Factorial.";
    }else{
        cout<<"Factorial of "<<n<<" is ";
        if(n==0 || n==1){
        fact=1;
        }else{
            for(int i=1;i<=n;i++){
               fact*=i;
             }
        }
    }
    cout<<fact;
    
}