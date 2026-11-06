#include<iostream>
using namespace std;
int main(){
    int Sec,hour,min;
    cout<<"Enter the seconds pls: ";
    cin>>Sec;
    cout<<"Hour/s: "<<(Sec/60)/60<<"hrs"<<" Minutes/s: "<<(Sec/60)<<"mins"<<" Second/s: "<<Sec<<"secs";
}