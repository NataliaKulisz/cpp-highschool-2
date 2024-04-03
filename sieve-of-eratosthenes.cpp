// The sieve of Eratosthenes is an algorithm for finding all prime numbers up to any given limit.
// https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
// The script returns all prime numbers from range <2, 100>.
// author: https://github.com/NataliaKulisz

#include <iostream>
using namespace std;
int main()
{
    bool prime[100] = {1, 1}; // 0 is a prime number
    for (int i = 2; i * i <= 100; i++)
        if (prime[i] == 0)
            for (int j = i * i; j < 100; j += i)
                prime[j] = 1;

    for (int i = 0; i < 100; i++)
        if (prime[i] == 0)
            cout << i << ", ";
    return 0;
}
