#include<iostream>;
using namespace std;
int main(){
    int number;
    cout<<"Enter the Numner: ";
    cin>>number;
    if(number%10==0){
        cout<<"Divisible by 10";
    }else{
        cout<<"Not divisible by 10";
    }
}