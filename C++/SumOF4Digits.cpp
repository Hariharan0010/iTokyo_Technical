#include <iostream>
using namespace std;
int main(){
    int code,sum=0,remainder,quotient;
    cout<<"Enter a 4 digit code: ";
    cin>>code;
    remainder=code%10;
    sum=sum+remainder;
    quotient=code/10;
    remainder=quotient%10;
    sum=sum+remainder;
    quotient=quotient/10;
    remainder=quotient%10;
    sum=sum+remainder;
    quotient=quotient/10;
    remainder=quotient%10;
    sum=sum+remainder;
    cout<<"The sum of the 4 digits is: "<<sum<<endl;
}