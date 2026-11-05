#include <iostream>
using namespace std;

int main()
{
    int chocolates, children, chocolatesPerChild, chocolatesLeft;

    cout << "Enter number of chocolates: ";
    cin >> chocolates;

    cout << "Enter number of children: ";
    cin >> children;


    chocolatesPerChild = chocolates / children;
    chocolatesLeft = chocolates % children;

    cout << "Each child gets "<< chocolatesPerChild<< " chocolates." << endl;
    cout << "Chocolates left: " << chocolatesLeft << endl;
}
