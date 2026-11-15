#include <iostream>
using namespace std;
int main(){
    int mark,attendance;
    cout<<"Enter the Mark: ";
    cin>>mark;   
    cout<<"Enter the Attendance percentage: ";
    cin>>attendance;
    if(mark>85 || attendance>90){
        cout<<"This person is eligibel for Schorlarship.";
    }else{
        cout<<"This person is not eligibel for Schorlarship.";
    }
}
