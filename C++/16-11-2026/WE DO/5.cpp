#include<iostream>
using namespace std;
int readChoice(int a);
int readChoice(int a){
    return a;
}
int main(){
    int a;
    cout<<"Enter your choice b/w 1&2: ";cin>>a;
    if(a==1||a==2){cout<<"The choice you have entered is "<<readChoice(a);}else{cout<<"Pls enter the choice only b/w 1 or 2.";}
 
} // namespace name
