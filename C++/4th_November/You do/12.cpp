#include<iostream>
using namespace std;
int main(){
    int no_of_pen=500,no_ofpacks=12;
    int total_packs=no_of_pen/no_ofpacks;
    int left=no_of_pen%no_ofpacks;
    cout<<"The Number of full boxes: "<<total_packs;cout<<" The no. of pens left over: "<<left;
}