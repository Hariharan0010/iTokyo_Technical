#include <iostream>
using namespace std;
int main() {
    const int SIZE = 5;
    int durations[SIZE];
    int target;
    for (int i = 0; i < SIZE; i++) {
        cout<<"Enter the duration for exercise "<<i+1<<": ";cin >> durations[i];
    }

    cout<<"Enter the Targeted Duration: ";
    cin >> target;

    int count = 0;
    int* ptr = durations;
    for (int i = 0; i < SIZE; i++) {
        if (*(ptr + i) >= target) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
