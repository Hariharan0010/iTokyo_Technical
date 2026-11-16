#include<iostream>
using namespace std;
int readTeamSize(int a);
int main(){
    int size;
    cout<<"Enter the Team size: ";cin>>size;
    if(size>0&&size<=6){
    cout<<"The Team size your have entered is "<<readTeamSize(size);
    }else if(size==0){
        cout<<"Please Enter the Team size.";
    }else{
        cout<<"The maximum team size allowed is 6.";
    }

}

int readTeamSize(int a){
    return a;
}