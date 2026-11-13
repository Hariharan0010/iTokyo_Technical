#include<iostream>
using namespace std;
int main(){
    int marks[5]={70, 45, 90, 60,80},position;
    cout<<"Enter the Position of the mark you want to get=> ";cin>>position;
    for(int i=0;i<size(marks);i++){
        if(i==(position-1)){
            cout<<"The mark in the told position is "<<marks[i];
        }
    }
}