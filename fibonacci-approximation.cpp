// The script prints approximations of 30 numbers from the Fibonacci sequence.
// https://en.wikipedia.org/wiki/Fibonacci_sequence
// author: https://github.com/NataliaKulisz

#include <iostream>
using namespace std;

int main()
{
    cout << "Approximations of 30 numbers from the Fibonacci sequence: " << endl;
    cout << 1 << endl
         << 1 << endl;
    float a = 1, b = 1, number;

    for (int i = 2; i <= 30; i++)
    {
        number = a + b;
        cout << number << " " << b / a << endl;
        a = b;
        b = number;
    }

    return 0;
}
