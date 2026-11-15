#include<iostream>
using namespace std;
int main(){
    int code=7351,total=0;
    while (code>0)
    {
        total+=code%10;
        code/=10;
    }
    cout<<"The sum of its four digits: "<<total;
    
}