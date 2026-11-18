#include<iostream>
using namespace std;
 int addBonus(int score);
 int addBonus(int score){
    int bonus=5;
    return score+bonus;
 }
 int main(){
    int score;
    cout<<"Enter the Score: ";cin>>score;
    if(score>=0&&score<=100){
        cout<<"The  Final Score: "<<addBonus(score);
    }
 }