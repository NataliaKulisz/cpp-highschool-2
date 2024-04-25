// The script prints the first 30 numbers from the Fibonacci sequence.
// https://en.wikipedia.org/wiki/Fibonacci_sequence
// author: https://github.com/NataliaKulisz

#include <iostream>
using namespace std;

int main()
{
    cout << 1 << endl
         << 1 << endl;
    int a = 1, b = 1, number;

    for (int i = 2; i <= 30; i++)
    {
        number = a + b;
        cout << number << endl;
        a = b;
        b = number;
    }

    return 0;
}
