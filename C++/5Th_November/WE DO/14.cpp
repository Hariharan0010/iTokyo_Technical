#include <iostream>
using namespace std;
int main(){
    int Money_P_unit,Total,unitsUsed;
    cin>>unitsUsed;
    Money_P_unit=2;
    if (unitsUsed >100){
        Total= (100*2)+((unitsUsed-100)*3);
    }else{
        Total=unitsUsed*2;
    }
    cout<<Total;
}