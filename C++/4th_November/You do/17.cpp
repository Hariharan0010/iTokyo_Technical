#include<iostream>
using namespace std;
int main(){
    int students=1430,bus_capacity=50,no_of_bus,students_left;
    no_of_bus=students/bus_capacity;
    students_left=students%bus_capacity;
    cout<<"Number of full bus: "<<no_of_bus<<endl;cout<<"No. of students left: "<<students_left;
}