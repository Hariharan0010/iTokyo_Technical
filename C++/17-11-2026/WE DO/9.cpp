#include <iostream>
using namespace std;
void showAmounts(int amount) {
    if (amount > 0) {
        int amount = 2;
        cout << amount << endl;
    }
    cout << amount << endl;
}
int main() {
    int amount;
    if (cin >> amount && amount >= 0 && amount <= 100) {
        cout<<'\n';
        showAmounts(amount);
    }
}
