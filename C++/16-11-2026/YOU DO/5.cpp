#include<iostream>
using namespace std;
double areaOfTriangle(double base, double height);
int main(){
    int base,height;
    cout<<"Pls Enter the Base of the Triangel: ";cin>>base;cout<<"Pls Enter the Height of the Triangel: ";cin>>height;
    cout<<"The area of the Triangel is "<<areaOfTriangle(base,height);
}


double areaOfTriangle(double base, double height){
    double area=(1.0/2)*base*height;
    return area;

}