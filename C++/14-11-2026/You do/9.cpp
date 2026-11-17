#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName, clubName;

    cin >> firstName;
    cin >> clubName;

    cout << firstName + "-" + clubName << endl;

    if(clubName == "Robotics")
    {
        cout << "Club is Robotics";
    }

}