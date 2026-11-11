#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the Starting Ticket number: ";
    cin>>number;
    cout<<number<<endl;
    while(number<10){
        number+=2;
        
        if(number<=9){cout<<number<<endl;}else{cout<<endl;}
        
        
    }
}