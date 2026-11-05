#include<iostream>
using namespace std;
int main(){
    int lenght, wide;
    cout<<"Enter the length of the rectangle: ";
    cin>>lenght;
    cout<<"Enter the width of the rectangle: ";
    cin>>wide;
    cout<<"Area of the rectangle is "<<lenght*wide<<endl;
    cout<<"Perimeter of the rectangle is "<<2*(lenght+wide)<<endl;
    return 0;
}