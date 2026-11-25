#include <iostream>
using namespace std;
void addReturns(int* count, int returned);

int main() {
    int shelfCount, returnedBooks;
    cin >> shelfCount >> returnedBooks;
    addReturns(&shelfCount, returnedBooks);
    cout << shelfCount << endl;
    return 0;
}

void addReturns(int* count, int returned) {
    if (count != nullptr) {
        *count += returned;
    }
}
