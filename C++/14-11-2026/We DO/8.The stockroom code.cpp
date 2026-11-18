#include<iostream>
using namespace std;
int main(){
            string Stored_code="BOX7",Typed_code;
            cout<<"Enter the code please: ";getline(cin,Typed_code);
            if(Stored_code == Typed_code){
                cout<<"Matched";
            }else{
                cout<<"Not Matched";
            }
}