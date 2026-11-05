#include <iostream>
using namespace std;
int main(){
    int rows,seates,Total_benches;
    cout<<"Enter the number of rows in the classroom: ";
    cin>>rows;
    cout<<"Enter the number of seates in each row: ";
    cin>>seates;
    Total_benches=rows*seates;
    cout<<"Total number of benches in the classroom is "<<Total_benches;
}