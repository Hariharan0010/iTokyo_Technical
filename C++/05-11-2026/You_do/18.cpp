#include<iostream>
using namespace std;
int main(){
    int cupboard_code=7351,sum=0;
    while(cupboard_code>0){
        sum+=(cupboard_code%10);
        cupboard_code/=10;
    }
    cout<<"The Sum of Give cupboard_code's digits is "<<sum;

}