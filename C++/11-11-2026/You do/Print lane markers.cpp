#include <iostream>
using namespace std;
int main(){
    int number,total;
    cout<<"Enter the No. of Lanes: ";cin>>number;
    for(int i=1;i<=number;i++){
        cout<<i*3<<endl;
        total+=i*3;

    }
    cout<<"Marker total = "<<total;
}