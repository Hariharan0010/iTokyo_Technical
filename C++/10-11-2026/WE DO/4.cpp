#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number: ";cin>>n;
    cout<<"Sum of numbers from 1 to "<<n<<" is ";
     /*for(int i=1;i<=n;i++){
        sum+=i;
     }*/
     sum=(n*(n+1))/2;
     cout<<sum;
}