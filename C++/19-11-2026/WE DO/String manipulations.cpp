#include<iostream>
using namespace std;
int main(){
    string text="This a Example of String manipulation.";
    cout<<"The String is: "<<text<<endl;
    cout<<"The length of the string using length(): "<<text.length()<<endl;
    cout<<"The length of the string using size(): "<<text.size()<<endl;
    cout<<"The First Character of the String using .front(): "<<text.front()<<endl;
    cout<<"The Last Character of the String using .back(): "<<text.back()<<endl;
    cout<<"Find the First occerance of this String or a character 'ample' using .find(): "<<text.find("ample")<<endl;
    cout<<"Creating a substring of the main string using substr(index,length): "<<text.substr(5,10)<<endl;
}