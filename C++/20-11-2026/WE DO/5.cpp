#include<iostream>
using namespace std;
class MarkRecord{
    private:
        int mark;
    public:
        MarkRecord(){
            mark=0;
        }
        bool setMark(int value){
            if(value>=0 && value<=100){
                mark=value;
                return true;
            }else{
                return false;
            }
        }
        int getMark(){
            return mark;
        }
};


int main(){
  
    MarkRecord record;
    int attempt1, attempt2;

    if (cin >> attempt1 >> attempt2) {

        if (record.setMark(attempt1)) {
            cout << "Accepted " << record.getMark() << "\n";
        } else {
            cout << "Rejected " << record.getMark() << "\n";
        }

        if (record.setMark(attempt2)) {
            cout << "Accepted " << record.getMark() << "\n";
        } else {
            cout << "Rejected " << record.getMark() << "\n";
        }
    }

} 
