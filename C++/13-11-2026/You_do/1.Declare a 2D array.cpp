#include<iostream>
using namespace std;
int main(){
    int array[2][3]={{11,12,13},{21,22,23}};
    for(int i=0;i<size(array);i++){
        for(int j=0;j<size(array[0]);j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
}