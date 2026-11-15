#include<iostream>
using namespace std;
int main(){
    int     token=407,reversed_token=0,rem,temp;
    temp=token;
    while(token>0){
        rem=token%10;
        reversed_token=reversed_token*10+rem;
        token/=10;
    }
    cout<<"The revesed token of "<<temp<<" is "<<reversed_token;
}