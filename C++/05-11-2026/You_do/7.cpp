#include <iostream>
using namespace std;
int main() {
    double salary;
    char grade;
    bool flag;
    int totalBytes = sizeof(salary) + sizeof(grade) + sizeof(flag);
    cout << "Total memory: " << totalBytes << " bytes";
}