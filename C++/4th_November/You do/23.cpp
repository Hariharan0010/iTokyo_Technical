#include<iostream>
using namespace std;
int main(){
    int stock = 30;
    int sold = stock-- - 4;int left= --stock + sold;
    cout<<"the final values of stock "<<stock<<", sold "<<sold<<" and left "<<left;
}