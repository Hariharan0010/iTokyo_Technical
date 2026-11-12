#include <iostream>
using namespace std;
int main(){
    int number,number1,number2=0,rem;
    cout<<"Enter the Original number: ";
    cin>>number;
    number1=number;
    do{
        rem = number%10;
        number2 = number2*10+rem;
        number=number/10;
    }while(number>0);
    cout<<"Reverse = "<<number2<<endl;
    if(number1 == number2){
        cout<<"Palindrome";
    }else{
        cout<<"Not a palindrome";
    }

    
}