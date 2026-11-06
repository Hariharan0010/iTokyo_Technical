#include <iostream>
using namespace std;
int main(){
    int adults, children;
    cout<<"Enter the number of adults: ";
    cin >> adults;
    cout<<"Enter the number of children: ";
        cin >> children;
        cout << "The total cost of the tickets is: "
            << (adults * 450) + (children * 225) << endl;
}