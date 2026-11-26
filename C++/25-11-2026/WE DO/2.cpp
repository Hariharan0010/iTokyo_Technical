#include<iostream>
using namespace std;

class Asset{

    private:
        int ID;
    public: 
        Asset(){
            ID=0;
        }
        int setID(int a){
            ID = a;
            return ID;
        }
        int getID(){
            return ID;
        }

};


class cyclinder:public Asset
{
private:
    int capacity;
public:
    cyclinder(){
        capacity=0;
    }
    int setCapacity(int c){
        capacity=c;
        return capacity;
    }


    void print(){
        cout<<"Asset "<<getID()<<" | "<<"Capacity "<<capacity<<" L";
    }
};



int main(){

    int id,capacity;
    cout<<"Entert the asset ID: ";cin>>id;
    cout<<"Entert the capacity in litres: ";cin>>capacity;
    cyclinder c;
    if(id>0 && capacity>0){
        c.setID(id);c.setCapacity(capacity);
        c.print();   
    }

}