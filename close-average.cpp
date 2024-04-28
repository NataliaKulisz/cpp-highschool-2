// The script takes the average of the generated numbers, and then enters the number closest to that average.
// author: https://github.com/NataliaKulisz

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void fill(int tab[], int size)
{
    for (int i = 0; i < size; i++)
    {
        tab[i] = rand() % 100 + 1;
    }
}

float average(int tab[], int size)
{
    float sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += tab[i];
    }

    return sum / size;
}

int close(int tab[], int size)
{
    int avg = average(tab, size);
    int closest = -1;
    float distance = 101;

    for (int i = 0; i < size; i++)
    {
        if (abs(avg - tab[i]) < distance)
        {
            distance = abs(avg - tab[i]);
            closest = tab[i];
        }
    }

    return closest;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int table[size];
    srand(time(NULL));
    fill(table, size);
    cout << "An array of generated numbers:" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << table[i] << ", ";
    }

    cout << endl
         << average(table, size);
    cout << endl
         << close(table, size);

    return 0;
}
