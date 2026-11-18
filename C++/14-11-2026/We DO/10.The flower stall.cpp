#include<iostream>
#include<string>
using namespace std;
int main(){
    string a="red rose";
    cout<<a;
    a.insert(0,"fresh");
    cout<<a;
    a.erase(6,4);
    cout<<a;
    a.replace(6,4,"lily");
    cout<<a;
}