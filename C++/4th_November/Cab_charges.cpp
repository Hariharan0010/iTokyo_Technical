#include <iostream>
using namespace std;
int main() {
    int distance,fare;
    cout<<"Enter the distance travelled in km: ";
    cin>>distance;
    fare=(distance*12)+50;
    cout<<"The total fare for the cab is: "<<fare<<"₹"<<endl;
}