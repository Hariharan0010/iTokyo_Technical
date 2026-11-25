#include<iostream>
using namespace std;
class employee{
    public:
        int ID;
        string name;
        string department;
        void dispalyCard(){
            cout<<"ID "<<ID<<endl;
            cout<<"Name "<<name<<endl;
            cout<<"Department "<<department<<endl;
        }
}
;
int main(){
    employee demo;
    cout<<"Enter the employee ID: ";cin>>demo.ID;
    cout<<"Enter the employee name: ";getline(cin.ignore(),demo.name);
    cout<<"Enter the department: ";getline(cin,demo.department);
    demo.dispalyCard();

}