#include<iostream>
#include<cmath>
using namespace std;
float tablesNeeded(float students);
int main(){
    float students;
    cout<<"Enter the number the of Students in the class: ";cin>>students;
    if(students>=1&&students<=100){
        cout<<"The No. of Tables Needed: "<<tablesNeeded(students);
    }else if(students==0||students<0){
        cout<<"Please Enter the Valid value.";
    }else{
        cout<<"No. of Students exceeds the Class limit.";
    }
}

float tablesNeeded(float students){
    float table_capacity=4;
    float total_tables= students/table_capacity;
    return ceil(total_tables);
}