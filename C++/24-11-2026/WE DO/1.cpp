#include<iostream>
using namespace std;
struct book{
    int book_id;
    int available_count;
    string title;

};
int main(){
    book one;
    cout<<"Enter the Book ID: ";cin>>one.book_id;
    cout<<"Enter the Book Name: ";getline(cin.ignore(),one.title);
    cout<<"Enter the Number of Copies: ";cin>>one.available_count;
    cout<<"ID "<<one.book_id<<endl;cout<<"Title "<<one.title<<endl;cout<<"Copies "<<one.available_count;
}