#include <iostream>
using namespace std;
int main(){
    int s,count=0,score=30,sum=0;
    cout<<"Scores: ";cin>>s;
    for(int i=1;i<s;i++){
        score+=10;
        if(score>=60){
            cout<<score<<endl;
            count++;
            sum+=score;
        }
    }
    cout<<"Qualified = "<<count<<endl;
    cout<<"Qualifying sum = "<<sum;
}