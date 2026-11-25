#include <iostream>
using namespace std;

int main() {
    int locker;
    cout<<"Enter the Locker number: ";cin >> locker;
    int* ptr = nullptr;
    if (locker >= 1 && locker <= 30) {
        ptr = &locker;
    }

    if (ptr != nullptr) {
        cout << *ptr << endl;
    } else {
        cout << "No locker" << endl;
    }

    return 0;
}
