#include<iostream>
using namespace std;
int area(int side){
    return side*side;
}
int area(int length, int width){
    return length*width;
}
int main(){
    int side;
    int length,breath;
    cout<<"Enter the Side of Square: ";cin>>side;
    cout<<"Enter the Length of Rectangle: ";cin>>length;
    cout<<"Enter the Breath of Rectangle: ";cin>>breath;
    cout<<"The area of Square for given side: "<<area(side)<<'\n';
    cout<<"The area of Rectangle for given length and width : "<<area(length,breath);
    
}