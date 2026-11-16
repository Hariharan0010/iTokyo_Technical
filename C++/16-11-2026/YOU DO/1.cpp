#include<iostream>
using namespace std;
bool isPrime(int number){
    int count=0;
    bool check=false;
    for(int i=1;i<=number;i++){      
        if(number%i==0){
            count++;
        }      
    }
    if (count==2){
        check=true;
    }
    
    return check;
}
    
int main(){
    int number;cout<<"Enter the number: ";cin>>number;
    if(isPrime(number)){
        cout<<"Prime";
    }else{
        cout<<"Not Prime";
    }
}