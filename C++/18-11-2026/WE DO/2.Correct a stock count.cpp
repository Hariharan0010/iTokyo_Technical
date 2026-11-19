#include<iostream>
using namespace std;
int main(){
    int original_stock_count,corrected_count;
    cout<<"Enter the Original Stock Count: ";cin>>original_stock_count;
    cout<<"Enter the Corrected Count: ";cin>>corrected_count;
    
    if((original_stock_count>=0&&original_stock_count<=1000)&&(corrected_count>=0&&corrected_count<=1000)){
        
        int* ptr=&original_stock_count;
        
        cout<<"Pointer points to the original stock count: "<<*ptr<<endl;
        
        *ptr=corrected_count;

        cout<<"Now the Original Stock count is changed to a corrected count value using pointer(ptr)."<<endl;
        cout<<"Pointer corrected to Original stock count: "<<original_stock_count;
    }
}