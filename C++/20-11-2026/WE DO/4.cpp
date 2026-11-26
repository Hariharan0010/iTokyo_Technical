#include<iostream>
using namespace std;
class Garden{
    private:
        int length,width;
    public: 
        Garden(){
            length=0;
            width=0;
        }
        int area(int l,int w){
           int area = l*w;
            return area;
        }
        int perimeter(int l,int w){
            int perimeter=(2*l)+(2*w);
            return perimeter;
        }

};
int main(){
    int length,width;
    Garden g;
    cout<<"Lenght: ";cin>>length;
    cout<<"Width: ";cin>>width;
    cout<<"Area "<<g.area(length,width)<<'\n';
    cout<<"Perimeter "<<g.perimeter(length,width);
}