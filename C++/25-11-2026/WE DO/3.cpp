#include<iostream>
using namespace std;

class Employee{
    private: 
        string phone;
    public:
        Employee(string P){
            phone=P;
        }
        string getPhone(){
            return phone;
        }
};

class Technician:public Employee{
    private: 
        string role;
    public: 
        Technician(string p,string r):Employee(p){
            role=r;
        }
        void display(){
            cout << role << ": " << getPhone() << endl;
        }
};
int main(){
    string phone,role;
    cout<<"Enter the Phone number: ";getline(cin,phone);
    cout<<"Enter the role: ";getline(cin,role);

    Technician tech(phone,role);
    tech.display();
}