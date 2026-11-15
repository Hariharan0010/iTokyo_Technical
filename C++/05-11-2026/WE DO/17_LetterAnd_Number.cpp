#include <iostream>
using namespace std;
int main(){
    int team;
    cout<<"enter the number of teams: ";
    cin>>team;
    for (int i=1;i<(team+1);i++)
    {
        cout<<"Team "<<i<<" gets the letter "<<char(i+64)<<endl;
    }
}
