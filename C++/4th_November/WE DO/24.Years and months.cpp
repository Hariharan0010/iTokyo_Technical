#include <iostream>
using namespace std;
int main(){
    int Days=900;
    int year=Days/365;
    int months=(Days%365)/30;
    int days=(Days%365)%30;
    cout<<"Years: "<<year<<" Months: "<<months<<" Days: "<<days;
}