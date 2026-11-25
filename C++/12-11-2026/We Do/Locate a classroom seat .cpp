#include <iostream>
using namespace std;

int main() {
 
    int seats[2][3] = {
        {11, 12, 13},
        {21, 22, 23} 
    };

    int row = 1;
    int col = 2;


    if (row >= 0 && row < 2 && col >= 0 && col < 3) {
        cout << "Seat code at [" << row << "][" << col << "] is: " << seats[row][col] << endl;
    } else {
        cout << "Invalid coordinates! Valid rows: 0-1, Valid columns: 0-2." << endl;
    }

    cout << "\nFull Seating Chart:" << endl;
    for (int i = 0; i < 2; i++) {       
        for (int j = 0; j < 3; j++) {   
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
