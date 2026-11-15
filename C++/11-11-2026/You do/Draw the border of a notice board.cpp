#include <iostream>
using namespace std;
int main(){
    int row,col,count=0;
    cout<<"Enter No.of Rows: ";cin>>row;cout<<"Enter No.of Columns: ";cin>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==0 || i==(row-1) || j==0||j==col-1){
                cout<<"#"<<" ";
                count++;
            }else{
                cout<<" "<<" ";
            }
            
        }
        cout<<endl;
        
    }
    cout<<"Border posititon = "<<count;
}