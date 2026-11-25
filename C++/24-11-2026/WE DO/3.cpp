#include<iostream>
using namespace std;
class Room{
    private: 
        int length,width;
    public: 
        void set_Dimensions(int a,int b){
            length=a;width=b;
        }
        int area_of_Rectangle(){
            int area = length*width;
            return area;
        }
};
int main(){
    Room rect;
    int a,b;
    cout<<"Enter the Room lenght in meters: ";cin>>a;
    cout<<"Enter the Room Width in meters: ";cin>>b;
    rect.set_Dimensions(a,b);
    cout<<"Area "<<rect.area_of_Rectangle()<<" Square meters";
    

}