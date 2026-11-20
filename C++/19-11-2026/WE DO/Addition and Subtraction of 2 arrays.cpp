#include<iostream>
using namespace std;                  
int main(){
    int array1[3][3]={{1,2,3},{4,5,6},{7,8,9}},array2[3][3]={{4,5,6},{1,2,3},{7,8,9}};
    cout<<"Addition of the Given Two Arrays: "<<endl;
    for(int i=0;i<size(array1);i++){
        cout<<"[";
        for(int j=0;j<size(array2[0]);j++){
            cout<<array1[i][j]+array2[i][j]<<" ";
        }
        cout<<"]";
        cout<<endl;
    }
    cout<<endl;

    cout<<"Subtraction of the Given Two Arrays: "<<endl;
    for(int i=0;i<size(array1);i++){
        cout<<"[";
        for(int j=0;j<size(array2[0]);j++){
            cout<<array1[i][j]-array2[i][j]<<" ";
        }
        cout<<"]";
        cout<<endl;
    }
}