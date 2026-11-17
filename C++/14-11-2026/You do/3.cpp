#include<iostream>
using namespace std;
int main(){
    string letters;
    int count=0;
    cout<<"Enter the letter: ";getline(cin,letters);
    for(int i=0;i<size(letters);i++){
        if(letters[i]=='e'){
            count++;
        }
        
    }
    cout<<"The No. of Times the samll 'e' comes in your given words/letters is "<<count;
}