#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=0 && age<=120){
        if(age>18){
            cout<<"Ok you are eligible for vote.";
        }else{
            cout<<"Ok you are not eligible for vote.";
        }
    }else{
        cout<<"Sorry please enter the valid / reasonable number.";
    }
}