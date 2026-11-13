#include <iostream>
using namespace std;
int main(){
    int days,distance,total;
    cout<<"Days = ";
    cin>>days;
    for(int i=1;i<=days;i++){
        distance=0;
        distance=i*2;
        total+=distance;
        cout<<"Distance = "<<distance<<", Total = "<<total<<endl;
    }
    if(total>=12){
        cout<<"Days = "<<days;
    }else{
        cout<<"Target not reached";
    }
}