#include<iostream>
using namespace std;
int main()
{
  int units=180,total=0;
  if(units>100){
        total+=(100*3);
        units-=100;
        total+=units*5;
  }else{
    total+=units*3;
  }  
  cout<<"The bill amount: "<<total;
} 
