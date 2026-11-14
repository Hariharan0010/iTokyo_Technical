#include<iostream>
#include<string>
using namespace std;
int main(){
    
    string city_name;
    cout<<"Enter the city name: ";getline(cin,city_name);
    cout<<"The Full City name is "<<city_name<<" and the length of the given city name including sapce is "<<city_name.length();
    
}