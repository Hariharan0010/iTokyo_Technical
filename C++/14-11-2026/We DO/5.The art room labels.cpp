#include<iostream>
#include<string>
using namespace std;
int main(){
    string colour;int count=0;
    cout<<"Enter 2 Colours(With space in-between each): ";getline(cin,colour);
    for(int i=0;i<colour.size();i++){
        if(colour[i]==' '){
            count=i;
        }
    }
    string first_colour=colour.substr(0,count+1);
    string second_colour=colour.substr(count);
    cout<<"The First colour: "<<first_colour<<endl;
    cout<<"The Second colour: "<<second_colour;
}