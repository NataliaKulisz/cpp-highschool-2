// The script finds prime numbers in a given range.
// author: https://github.com/NataliaKulisz

#include <iostream>
using namespace std;

int divider = 2;

bool prime(int a)
{
    if (a < 2)
        return false;

    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
            return false;
    }

    return true;
}
int main()
{
    int x1, x2;

    cout << "Enter the first number of the range: ";
    cin >> x1;
    cout << "Enter the second number of the range: ";
    cin >> x2;
    cout << "Prime numbers from the given range: ";

    for (int i = x1; i <= x2; i++)
    {
        if (prime(i) == true)
            cout << i << ", ";
    }

    return 0;
}
