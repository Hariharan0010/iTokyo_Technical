#include<iostream>
using namespace std;
void add(){
    int a,b;
    cout<<"Enter the Number1: ";cin>>a;
    cout<<"Enter the Number2: ";cin>>b;
    cout<<"The Addition of the Given 2 numbers is "<<a+b;
}

void add(int a,int b){
    cout<<"The Addition of the Given 2 numbers is "<<a+b;
}

void add(int a,int b,int c){ 
    cout<<"The Addition of the Given 3 numbers is "<<a+b+c;
}

int add(int a,float b){
    return a+b;
}

int add(int a,int b,float c){
    return a+b+c;
}

int main(){
    cout<<"Asking 2 numbers form Console and adding it in the calling function itself: "<<" ";add();cout<<endl;
    int a,b,c;
    cout<<"Enter the Number1: ";cin>>a;
    cout<<"Enter the Number2: ";cin>>b;
    cout<<"Enter the Number3: ";cin>>c;
    cout<<"Taking 2 numbers form the main function and adding it insde the calling function itself:"<<" ";add(a,b);cout<<endl;
    cout<<"Taking 3 numbers form the main function and adding it insde the calling function itself:"<<" ";add(a,b,c);cout<<endl;
    int d;float e,f;
    cout<<"Enter the Number1: ";cin>>d;
    cout<<"Enter the Number2: ";cin>>e;
    cout<<"Enter the Number3: ";cin>>f;
    cout<<"Asking 2 numbers form the main function and adding it in the calling function itself and return it to the Main function: "<<add(d,e);cout<<endl;
    cout<<"Asking 3 numbers form the main function and adding it in the calling function itself and return it to the Main function: "<<add(d,e,f);

}