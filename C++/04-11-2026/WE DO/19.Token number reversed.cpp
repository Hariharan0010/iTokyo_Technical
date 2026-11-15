#include <iostream>
using namespace std;
int main(){
    int token=253,rem,reversed_token=0;
    while(token>0){
        rem=token%10;
        reversed_token=reversed_token*10+rem;
        token/=10;
    }
    cout<<reversed_token;
    

}