#include<iostream>
using namespace std;
int main(){
    int sensors[4];int offset,input;
    for(int i=0;i<size(sensors);i++){
        
        cout<<"Enter the value of Sensor "<<i+1<<": ";cin>>sensors[i];
    }
    cout<<"Enter the Offset: ";cin>>offset;
    int* ptr=sensors;
    cout<<ptr[0+offset];

}