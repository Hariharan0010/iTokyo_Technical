#include <iostream>
using namespace std;
int main(){
    int Board_side;
    cout<<"Board_side: ";cin>>Board_side;
    for(int i=1;i<Board_side+1;i++){
        for(int j=1;j<Board_side+1;j++){
            if(((i%2!=0)&&(j%2!=0))||((i%2==0)&&(j%2==0))){
                cout<<"#";
            }else{
                cout<<".";
            }
        }
        cout<<endl;
    }
}