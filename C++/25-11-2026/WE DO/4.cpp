#include<iostream>
using namespace std;

class Person{
    private: 
        string name;
    public: 
        Person(string n){
            name =n;
        }
        string getname(){
            return name;
        }
};

class Student:public Person{
    private:
        int roll_number;
    public: 
        Student(string n, int r):Person(n){
            roll_number=r;
        }
        int getRollNum(){
            return roll_number;
        }
};

class AssessmentReport:public Student{
    private:
        int mark1,mark2;
    public: 
        AssessmentReport(string n,int r,int m1,int m2):Student(n,r){
            mark1=m1;mark2=m2;
        }
        void dispaly(){
            cout<<getname()<<" | "<<"Roll "<<getRollNum()<<" | "<<"Total "<<mark1+mark2;
        }
};

int main(){
    int mark1,mark2,Roll;
    string name;
    cout<<"Enter the ne"
} 
