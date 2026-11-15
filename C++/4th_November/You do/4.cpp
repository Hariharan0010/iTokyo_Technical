#include <iostream>
using namespace std;
int main(){
    int no_of_students,no_of_teams,students_left;
    no_of_students=85;no_of_teams=no_of_students/6;students_left=no_of_students%6;
    cout<<"The number of full teams is "<<no_of_teams<<" and the no. of students left over is "<<students_left;
} 
