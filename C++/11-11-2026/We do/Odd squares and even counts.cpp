#include <iostream>
using namespace std;
int main(){
    int odd_Square_count = 0;
    int Even_count = 0;

    for(int i=1;i<11;i++){
       if(i%2==1){odd_Square_count+=i*i;}else{Even_count++;} 
       
    }
    cout<<"Odd_Squares: "<<odd_Square_count<<endl;
    cout<<"Even_count: "<<Even_count;
}