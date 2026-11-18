#include<iostream>
using namespace std;
int main(){
    string city,district,output;
    cout<<"Enter the City Name: ";getline(cin,city);
    cout<<"Enter the District: ";getline(cin,district);
    output = city+" "+district;
    cout<<"The final Output: "<<output;
}