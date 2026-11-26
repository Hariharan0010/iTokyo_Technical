#include<iostream>
using namespace std;


class GetCounter{

    private:
        int count;
    
    public: 
        GetCounter(){
            count=0;
        }
        int enter(){
            count=count+1;
            return count;
        }
        int getCount(){
            return count;
        }
};


int main(){
    int arraivals;
    GetCounter count1,count2;
    cout<<"Arraivals: ";cin>>arraivals;

    if(arraivals>=0&&arraivals<=20){
    
            for(int i=0;i<arraivals;i++){
        int gate;
        cout<<"Gate No: ";cin>>gate;

        if(gate>0){

            if(gate==1){
                count1.enter();
            }else if(gate==2){
                count2.enter();
            }else{
                cout<<"There is only gate 1 or gate 2."<<endl;
                break;
            }
        }
    }
    cout<<"Gate 1 count: "<<count1.getCount()<<" | Gate 2 count: "<<count2.getCount();    

    }else{

        cout<<"Sorry i have heard only 15 to 20 members are going to come today.";

    }
    

}