// The script checks whether the number is prime.
// author: https://github.com/NataliaKulisz

#include <iostream>
using namespace std;

int main()
{
    int number, divisor = 2, prime = 1;
    cin >> number;

    while (divisor * divisor <= number)
    {
        if (number % divisor == 0)
        {
            number = 0;
            break;
        }
        divisor++;
    }

    if (prime == 1)
        cout << "the number is prime" << endl;
    else
        cout << "the number is not prime" << endl;
}
