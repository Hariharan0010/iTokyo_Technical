#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age please: ";
    cin>>age;
    if(0>age || age>120){
        cout<<"Please enter the Vaild Age.";
    }else{
        if(age>=60){
            cout<<"Eligible for senior citizen discount";
        }else{
            cout<<"Not eligible for senior citizen discount";
        }
    }
}