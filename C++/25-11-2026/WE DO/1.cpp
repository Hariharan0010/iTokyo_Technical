#include<iostream>
using namespace std;
class Person{
    private: 
     string name;
    public: 
        string getName(){
            return name;
        }
        string setNmae(string a){
            name = a;
            return name;
        }
};
class Instructor:public Person{
    private: 
        string subject;
    public:
        string getSubject(){
            return subject;
        }
        string setSubject(string a){
            subject=a;
            return subject;
        }
};
int main(){
    string name,subject;
    Instructor i;
    cout<<"Enter the Name: ";getline(cin,name);
    cout<<"Enter the Subject: ";getline(cin,subject);
    if(name !="" && subject!=""){
        i.setNmae(name);
        i.setSubject(subject);
        cout<<i.getName()<<" teachs "<<i.getSubject();
    }else{
        cout<<"Please fill all the Fileds.";
    }

}