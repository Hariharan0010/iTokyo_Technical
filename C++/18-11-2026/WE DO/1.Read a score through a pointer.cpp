#include<iostream>
using namespace std;
int main(){
    int score;
    cout<<"Enter the score: ";cin>>score;
    if(score>=0&&score<=100){
        int* ptr=&score;
        cout<<"Printing the pointer value: "<<*ptr<<'\n';
        if(&score==ptr){
            cout<<"Same address"<<'\n';
        }
        cout<<"&score(Address of the given score): "<<&score<<'\n';cout<<"ptr(ptr points to the Address of the given score): "<<ptr;
    }
    

}