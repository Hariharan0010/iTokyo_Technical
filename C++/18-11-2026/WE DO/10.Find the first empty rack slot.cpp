#include<iostream>
using namespace std;
int main(){
    int rack[6];bool flag=false;int pos{};
    for(int i=0;i<size(rack);i++){
        int number;
        cout<<"Enter the number for element"<<i+1<<": ";cin>>number;
        if(number>=0&&number<=100){
            rack[i]=number;
        } else{
            cout<<"Enter Only the number between 0 to 100.";
            break;
        }
    }

    
    for(int i=0;i<size(rack);i++){
        int* ptr=&rack[i];
        if (*ptr==0)
        {
            pos=i;
            flag=true;
            break;
        }
    }
if(!flag){
    cout<<"-1";
}else{
    cout<<pos;
}
}