#include<iostream>
using namespace std;
int perimeter(int side);
int perimeter(int length, int width);
int main(){
    int a,b,c;
    cout<<"Enter the side of the Square: ";cin>>a;cout<<"Enter the length of the Rectangel: ";cin>>b;cout<<"Enter the breath of the Rectangle: ";cin>>c;
    cout<<"The Perimeter of the sqaure: "<<perimeter(a)<<endl;
    cout<<"The Perimeter of the Rectangle: "<<perimeter(b,c);
 }
int perimeter(int side){
    return 4*side;
}
int perimeter(int length, int width){
    return (2*width)+(2*length);
}