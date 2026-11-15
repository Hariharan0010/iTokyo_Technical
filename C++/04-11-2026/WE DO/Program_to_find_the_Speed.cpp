#include <iostream>
using namespace std;
int main(){
    int distance,time,speed;
    cout<<"Enter the distance travelled in km: ";
    cin>>distance;
    cout<<"Enter the time taken in hours: ";
    cin>>time;
    speed=distance/time;
    cout<<"The speed of the vehicle is "<<speed<<" km/hr";
}
