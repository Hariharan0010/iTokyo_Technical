#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the number: ";
    cin >> N;
    int count = 0;
    int num = 2;
    while(true)
    {
        int factors = 0;
        for(int i = 1; i <= num; i++)
        {
            if(num % i == 0)
            {
                factors++;
            }
        }
        if(factors == 2)
        {
            count++;
            if(count == N)
            {
                cout << num;
                break;
            }
        }
        num++;
    }
}