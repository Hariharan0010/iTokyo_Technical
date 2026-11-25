#include<iostream>
using namespace std;
int main(){
    int weight = 17;
    int* ptr=&weight;
    cout<<"Weight Stored in the Pointer: "<<*ptr;
}