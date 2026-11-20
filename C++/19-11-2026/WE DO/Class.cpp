#include<iostream>
using namespace std;
struct students
{

    int RollNo;
    string names;
    int English_mark;
    int Maths_mark;
    int Science_mark;
    int total;
    float avg;

};

int main(){
    students nskStudents[14];
    for(int i=0;i<size(nskStudents);i++){
        cout<<"Enter your Roll No.: ";cin>>nskStudents[i].RollNo;
        cout<<"Enter your Name: ";cin>>nskStudents[i].names;
        cout<<"Enter your English Mark: ";cin>>nskStudents[i].English_mark;
        cout<<"Enter your Maths Mark: ";cin>>nskStudents[i].Maths_mark;
        cout<<"Enter your Science Mark: ";cin>>nskStudents[i].Science_mark;
        nskStudents[i].total=nskStudents[i].English_mark+nskStudents[i].Maths_mark+nskStudents[i].Science_mark;
        nskStudents[i].avg=(nskStudents[i].English_mark+nskStudents[i].Maths_mark+nskStudents[i].Science_mark)/3;
    }
    cout<<endl<<endl;
    for(int i=0;i<size(nskStudents);i++){
        cout<<"RollNo.: "<<nskStudents[i].RollNo<<endl;
        cout<<"Name: "<<nskStudents[i].names<<endl;
        cout<<"English mark: "<<nskStudents[i].English_mark<<endl;
        cout<<"Maths mark: "<<nskStudents[i].Maths_mark<<endl;
        cout<<"Science mark: "<<nskStudents[i].Science_mark<<endl;
        cout<<"Total marks: "<<nskStudents[i].total<<endl;
        cout<<"Average of given marks: "<<nskStudents[i].avg<<endl;
    }

}