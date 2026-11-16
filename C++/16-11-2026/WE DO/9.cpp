#include<iostream>
using  namespace std;
int countEvenTickects(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            count+=1;
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n>0&&n<=1000){
        cout<<"The no. of even numbers between 1 to "<<n<<"is "<<countEvenTickects(n);
    }else{
        "Enter the number between 0 and 1000.";
    }

}