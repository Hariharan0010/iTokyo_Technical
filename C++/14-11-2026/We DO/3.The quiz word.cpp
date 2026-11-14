#include<iostream>
#include<string>
using namespace std;
int main(){
    string dispaly="MANGO";
    cout<<"The Lenght of the give Word is "<<dispaly.length()<<endl;
    cout<<"The First character of the Given word is "<<dispaly[0]<<endl;
    cout<<"The  Character at index 2 of the Given word is "<<dispaly[2]<<endl;
    cout<<"The Character last valid index is "<<(dispaly.length())-1<<endl;
    cout<<"What will happen if you call the 5th index "<<dispaly[5]<<endl;

}