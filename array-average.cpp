// Script that prints the average of randomly generated numbers.
// author: https://github.com/NataliaKulisz

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void enter_number(float tab[], int size)
{
    for (int i = 0; i < size; i++)
    {
        tab[i] = rand() % 100 + 1;
    }
}

float average(float tab[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += tab[i];
    }
    return sum / size;
}

int main()
{
    int size;

    cout << "Enter an array size: ";
    cin >> size;
    float table[size];
    srand(time(NULL));
    enter_number(table, size);

    cout << "The array of generated numbers:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << table[i] << ", ";
    }
    cout << endl;

    cout << "The average of the numbers in the array: " << average(table, size) << endl;
    return 0;
}
