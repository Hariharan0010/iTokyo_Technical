#include<iostream>
using namespace std;
struct Rectangel
{
    int Length,width;
    int area(int l,int w){
        Length=l;
        width=w;
        return l*w;
    }
};

int main(){
    Rectangel rect;
    cout<<"Enter the Length of the Rectangle: ";cin>>rect.Length;cout<<"Enter the Width of the Rectangle: ";cin>>rect.width;
    cout<<"Area "<<rect.area(rect.Length,rect.width)<<" square centimetres.";
}