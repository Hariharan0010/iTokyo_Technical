#include<iostream>
using namespace std;
int main(){
    int num,count;
    cout<<"Notebooks = ";
    cin>>num;
    if(num%4==0){
        for(int i=0;i<(num/4);i++){
            cout<<"Packed = 4"<<endl;
            count++;
        }
    }else{
        for(int i=0;i<(num/4);i++){
            cout<<"Packed = 4"<<endl;
            count++;
        }
        cout<<"Packed = "<<(num%4)<<endl;
        count+=1;
        
    }
    cout<<"Cartoons ="<<count;
}