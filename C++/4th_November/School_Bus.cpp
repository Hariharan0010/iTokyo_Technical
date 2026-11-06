#include<iostream>
using namespace std;
int main(){
    int Toatal_no_of_Students,No_of_Buses,Students_per_Bus,Students_leftOut;
    cout<<"Enter the total number of students: ";
    cin>>Toatal_no_of_Students;
    cout<<"Enter the number of buses: ";
    cin>>No_of_Buses;
    Students_per_Bus=Toatal_no_of_Students/No_of_Buses;
    Students_leftOut=Toatal_no_of_Students%No_of_Buses;
    cout<<"Students per bus: "<<Students_per_Bus<<endl;
    cout<<"Students left out: "<<Students_leftOut<<endl;
    
}