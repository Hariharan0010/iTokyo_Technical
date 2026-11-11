#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<31;i++){
        if(i%5==0){continue;}
        else{cout<<i<<endl;cout<<"Line is Completed."<<endl;}
    }
}