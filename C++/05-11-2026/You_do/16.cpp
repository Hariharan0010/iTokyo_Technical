#include<iostream>
using namespace std;
int main(){
    int stock=30;
    int sold = stock-- - 4; 
    int left = --stock + sold;
    cout<<"Stock:"<<stock<<" sold: "<<sold<<" left: "<<left;
}