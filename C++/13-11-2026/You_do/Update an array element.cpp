#include<iostream>
using namespace std;
int main(){
    int Replacement_value,Preset_value[5],num,Replacement_index;

    for(int i=0;i<size(Preset_value);i++){
        cout<<"Enter the number: ";cin>>num;
        Preset_value[i]=num;
    }
    cout<<"Enter the Replacement_value: ";cin>>Replacement_value;
    cout<<"Enter the Replacement_index: ";cin>>Replacement_index;
    for(int i=0;i<size(Preset_value);i++){
        if(i==Replacement_index){
            Preset_value[i]=Replacement_value;
        }
    }
    for(int i=0;i<size(Preset_value);i++){
        cout<<Preset_value[i]<<" "; 
    }
}