#include<iostream>
using namespace std;
int main(){
    int score=40;
    int bonus = score++ + 5;  
int total = ++score * 2;
cout<<"Final values of Scores: "<<score<<",Bouns: "<<bonus<<" and Total: "<<total;
}