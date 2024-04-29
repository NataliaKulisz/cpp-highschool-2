// The script generates an array of random numbers.
// author: https://github.com/NataliaKulisz

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generate(int sequence[], int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        sequence[i] = rand() % 1000 + 1;
    }
}

void print(int sequence[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << sequence[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n = 10;
    int sequence[n];
    generate(sequence, n);
    cout << "Generated sequence of " << n << " numbers: ";
    print(sequence, n);
    return 0;
}
