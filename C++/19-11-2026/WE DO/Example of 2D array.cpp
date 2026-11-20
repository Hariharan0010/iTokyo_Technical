#include<iostream>
using namespace std;
int main(){
    int array[2][3];
    // for(int i=0;i<(sizeof(array)/sizeof(array[0]));i++){
    //     for (int j=0;j<(sizeof(array[0])/sizeof(array[0][0]));j++){
    //         cin>>array[i][j];

    //     }
    // }
    for(int i=0;i<(size(array));i++){
        for (int j=0;j<size(array[0]);j++){
            cout<<"Enter the Element";cin>>array[i][j];
        }
    }
}   