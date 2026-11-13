#include<iostream>
using namespace std;
int main(){
    int First_grid[3][2]={{5, 8}, {3, 7}, {9, 2}},second_grid[3][2]={{5, 8}, {3, 7}, {9, 2}},third_grid[3][2],total1=0,total2=0;
    for(int i=0;i<size(First_grid);i++){
        for(int j=0;j<size(second_grid[0]);j++){
            third_grid[i][j]=First_grid[i][j]+second_grid[i][j];
        }
        
    }
    cout<<"First grid rows: "<<"{ ";
    for(int i=0;i<size(First_grid);i++){
        cout<<"{ ";
        for(int j=0;j<size(second_grid[0]);j++){
            cout<<First_grid[i][j]<<" ";
        }
        cout<<"} "<<" ";
    }cout<<"}"<<endl;

    cout<<"Second grid rows: "<<"{ ";
    for(int i=0;i<size(First_grid);i++){
        cout<<"{ ";
        for(int j=0;j<size(second_grid[0]);j++){
            cout<<second_grid[i][j]<<" ";
        }
        cout<<"} "<<" ";
    }cout<<"}"<<endl;

    cout<<"Third grid rows: "<<"{ ";
    for(int i=0;i<size(First_grid);i++){
        cout<<"{ ";
        for(int j=0;j<size(second_grid[0]);j++){
            cout<<third_grid[i][j]<<" ";
            
        }
        cout<<"} "<<" ";
    }cout<<"}"<<endl;

    for(int i=0;i<size(First_grid);i++){
        total1=0;
        for(int j=0;j<size(second_grid[0]);j++){
  
            total1+=third_grid[i][j];
        }
        cout<<"Total of the row no."<<i+1<<" is "<<total1<<endl;
        total2+=total1;
    }

    cout<<"Total of the entire values in the Third row: "<<total2;

    
    
}
