#include<iostream>
using  namespace std;
void printBadges(int n);
void printBadges(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    printBadges(num);
}