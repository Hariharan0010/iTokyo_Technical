#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int mark,attendance;
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter your mark:";
    cin>>mark;
    cout<<"Enter your attendance:";
    cin>>attendance;
    if(attendance>90){
        mark+=5;
        cout<<"Ok "<<name<<" the bonus mark is added to you,this is the final mark:"<<mark;
    }else{
        cout<<"Sorry "<<name<<" the bonus mark will not be added to you,this is the final mark:"<<mark;
    }
}