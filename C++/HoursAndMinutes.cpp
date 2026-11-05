#include <iostream>
using namespace std;
int main() {
    int hours, minutes, total_minutes;
    cout << "Enter total minutes: ";
    cin >> total_minutes;
    hours = total_minutes / 60;
    minutes = total_minutes % 60;
    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    return 0;
    }