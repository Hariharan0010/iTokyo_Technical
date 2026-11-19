#include<iostream>
using namespace std;
int main(){
    int attendance_count_1,attendance_count_2;
    cout<<"Enter the Value for Attendance Counter 1: ";cin>>attendance_count_1;
    cout<<"Enter the Value for Attendance Counter 2: ";cin>>attendance_count_2;
    if((attendance_count_1>=0&&attendance_count_1<=100)&&(attendance_count_2>=0&&attendance_count_2<=100)){
        int* p =&attendance_count_1;
        int* q= p;
        *q+=1;
        q=&attendance_count_2;
        cout<<"Attendance Counter 1: "<<attendance_count_1<<endl;
        cout<<"Attendance Counter 2: "<<attendance_count_2<<endl;
    }
}