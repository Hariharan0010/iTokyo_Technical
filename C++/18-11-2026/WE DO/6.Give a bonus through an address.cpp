#include<iostream>
using namespace std;
 void addBonus(int* score);
void addBonus(int* score){
    cout<<"After the Bonus marks the score will be: "<<*score+5;
  }
int main(){
    int score;
    cout<<"Enter Score: ";cin>>score;
    if(score>=0&&score<=100){
        int* ptr=&score;
        addBonus(ptr);
    }
    else{
        cout<<"Enter the Valid Score(0 to 100).";
    }
}