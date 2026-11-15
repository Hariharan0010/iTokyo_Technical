#include<iostream>
using namespace std;
int main(){
    
    int hours,population,target;
    hours=0;
    cout<<"Please Enter the Population of the Cells: "<<endl;
    cin>>population;
    cout<<"Please Enter the Target: "<<endl;
    cin>>target;
    do{
        population=population*2;
        hours++;
    }while(population<target);
    cout<<"Hours= "<<hours<<endl<<"Population of cells = "<<population;
}