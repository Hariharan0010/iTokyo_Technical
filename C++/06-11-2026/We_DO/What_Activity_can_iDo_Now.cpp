#include <iostream>
#include <string>
using namespace std;
int main(){
    bool weather_report;
    cout<<"Tell me how is the weather,is it raining? [true/flase]: ";
    cin>>boolalpha>>weather_report;
    if(weather_report){
        cout<<"Activity: Play video games";
    }else{
        cout<<"Activity: Play Outside";
    }
}