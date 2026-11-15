#include <iostream>
using namespace std;
int main(){
    int Floor,Units,SN=1,count=0;
    cout<<"Enter the No. of FloorS: ";
    cin>>Floor;
    cout<<"Enter the No. of UnitS: ";
    cin>>Units;
    while(SN>0){
        SN=Floor%Units;
        Floor=Units;
        Units=SN;
        count++;
    }
    cout<<"Tile side = "<<Floor<<endl;
}