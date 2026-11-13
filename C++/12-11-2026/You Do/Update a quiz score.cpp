#include <iostream>
using namespace std;

int main(){
    int arr[6]={55,72,68,91,83};

    for(int i=0;i<size(arr);i++){
        if(i==2){
            arr[i]=76;
        }
        else if(i==5){
            arr[i]=60;
        }
    }

    for(int i=0;i<size(arr);i++){
        cout<<arr[i]<<" ";
    }
}