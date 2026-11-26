#include<iostream>
using namespace std;
class LibraryAccount
    {
        private:
            int borrowed_count;
        public:
             LibraryAccount(){
                borrowed_count=0;
             }
             int borrowOne(int count){
                borrowed_count+=count;
                return borrowed_count;
             }
             int getBorrowedCount(){
                return borrowed_count;
             }
    };
int main(){
    int requested_books;
    LibraryAccount acc1;
    cout<<"Requested Books: ";cin>>requested_books;
    if(requested_books>=0&&requested_books<=5){
        acc1.borrowOne(requested_books);
    }else{
        cout<<"Only 5 books are Allowed to Borrow."<<endl;
    }
    cout<<"Books Borrowed: "<<acc1.getBorrowedCount();
} 
