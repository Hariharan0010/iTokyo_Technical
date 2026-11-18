#include<iostream>
using namespace std;
void showDemoMarks();
void showDemoMarks(){
    int marks=50;
    cout<<"The mark Enterd inside the Demo Function is "<<marks<<endl;
}
int main(){
    int marks;
    cout<<"Enter Your Mark: ";cin>>marks;
    showDemoMarks();
    if(marks>=0&&marks<=100){
        cout<<"The mark Enterd inside the Main Function is "<<marks;
    }
}