#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the Lenght of side 1: ";
    cin>>a;
    cout<<"Enter the Lenght of side 2: ";
    cin>>b;
    cout<<"Enter the Lenght of side 3: ";
    cin>>c;
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        cout<<"Valid triangle";
    }else{
        cout<<"Not a valid triangle";
    }
}
