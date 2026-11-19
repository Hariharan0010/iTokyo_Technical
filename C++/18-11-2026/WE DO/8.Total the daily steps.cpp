#include<iostream>
using namespace std;
int main(){
    int counts[5];int total;
    for(int i=0;i<size(counts);i++){
        cout<<"Enter the Step count of day"<<i+1<<": ";cin>>counts[i];
    }
    int* ptr=counts;
    for(int i=0;i<size(counts);i++){
        total+=ptr[i];
    }
    cout<<total;
}