#include<iostream>
using namespace std;
int main(){
    int Books,Bought_Price,Sold_Price,Profit;
    cout<<"Enter the number of books: ";
    cin>>Books;
    cout<<"Enter the bought price of each book: ";  
    cin>>Bought_Price;
    cout<<"Enter the sold price of each book: ";
    cin>>Sold_Price;
    Profit=(Sold_Price-Bought_Price)*Books;
    cout<<"Profit: "<<Profit<<endl;
}