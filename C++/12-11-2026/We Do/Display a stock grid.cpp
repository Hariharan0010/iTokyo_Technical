#include <iostream>
using namespace std;

int main() {
    
    int stock[2][3] = {
        {4, 7, 2}, 
        {6, 1, 9}  
    };

    for (int i = 0; i < 2; i++) {
        int shelf_total = 0;         
        cout << "Shelf " << i + 1 << ": ";
        
        for (int j = 0; j < 3; j++) {
            cout << stock[i][j] << " ";
            shelf_total += stock[i][j];
        }
        
        cout << "| Total: " << shelf_total << endl;
    }

    return 0;
}
