// The script checks whether the given number is a narcissistic number.
// https://en.wikipedia.org/wiki/Narcissistic_number
// author: https://github.com/NataliaKulisz

#include <iostream>
using namespace std;

int power(int base, int exponent)
{
    int result = base;

    if (exponent == 0)
        return 1;
    if (exponent == 1)
        return base;
    else
        for (int i = 1; i < exponent; i++)
            result *= base;
    return result;
}

int count_digits(int number)
{
    int digits = 0;

    while (number != 0)
    {
        number /= 10;
        digits++;
    }
    return digits;
}

int is_narcissistic(int number)
{
    int value = number;
    int sum = 0;
    int digits = count_digits(number);

    while (value != 0)
    {
        int digit = value % 10;
        sum += power(digit, digits);
        value /= 10;
    }
    return sum == number;
}

int main()
{
    int number;
    cout << "Give me a number: ";
    cin >> number;

    if (is_narcissistic(number))
        cout << number << " is a narcissistic number" << endl;
    else
        cout << number << " not a narcissistic number" << endl;
    return 0;
}
