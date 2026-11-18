#include<iostream>
using namespace std;
int main(){
    int A[2][3]={{2,4,6},{1,3,5}},B[2][3]={{3,1,2},{4,2,1}},sum[2][3];
    for(int i=0;i<size(A);i++){
        for(int j=0;j<size(A[0]);j++){
            sum[i][j]=A[i][j]+B[i][j];
        }
    }
    cout<<"Array A: "<<endl;
    for(int i=0;i<size(A);i++){
        cout<<"  [";
        for(int j=0;j<size(A[0]);j++){
            cout<<A[i][j];
            if(j<size(A[0])-1){
                cout<<",";
            }
        }
       cout<<"]"<<endl;
    }
    cout<<endl;
    

    cout<<"Array B: "<<endl;
    for(int i=0;i<size(A);i++){
        cout<<"  [";
        for(int j=0;j<size(A[0]);j++){
            cout<<B[i][j];
            if(j<size(A[0])-1){
                cout<<",";
            }
        }
        cout<<"]"<<endl;
    }
    
    cout<<endl;
    cout<<"Array Sum: "<<endl;
    for(int i=0;i<size(A);i++){
        cout<<"  [";
        for(int j=0;j<size(A[0]);j++){
            cout<<sum[i][j];
            if(j<size(A[0])-1){
                cout<<",";
            }
        }
        cout<<"]"<<endl;
    }
    
}