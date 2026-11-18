#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the Number: ";
    cin >> number;

    int factors[100];
    int count = 0;

    if (number >= 1 && number <= 100) {
        for (int i = 1; i <= number; i++) {
            if (number % i == 0) {
                factors[count] = i;
                count++;
            }
        }

        cout << "The Factors of the Given Number: ";
        for (int i = 0; i < count; i++) {
            cout << factors[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Please enter a number between 1 and 100." << endl;
    }

    return 0;
}
