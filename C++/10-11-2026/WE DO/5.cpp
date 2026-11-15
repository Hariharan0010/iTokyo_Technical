#include<iostream>
using namespace std;
int main(){
    float n,sum;float avg;
    cout<<"Enter the number: ";cin>>n;
    cout<<"Average of numbers from 1 to "<<n<<" is ";
     for(int i=1;i<=n;i++){
        sum+=i;
     }
     avg=sum/n;
     cout<<avg;
}