// The script sorts randomly generated numbers using the bubble sort method.
// author: https://github.com/NataliaKulisz

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void fill(int tab[]);
void write(int tab[]);
void bubbleSort(int tab[]);

int main()
{
    int table[10] = {0};
    srand(time(NULL));
    fill(table);
    write(table);

    bubbleSort(table);
    cout << "Sorted array:" << endl;
    write(table);

    return 0;
}

void fill(int tab[])
{
    for (int i = 0; i < 10; i++)
        tab[i] = rand() % 101;
}

void write(int tab[])
{
    for (int i = 0; i < 10; i++)
        cout << tab[i] << ", ";
    cout << endl;
}

void bubbleSort(int tab[])
{
    bool sort = false;
    int j = 0;
    while (!sort)
    {
        sort = true;
        for (int i = 0; i < 9 - j; i++)
        {
            if (tab[i] > tab[i + 1])
            {
                int pom = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = pom;
                sort = false;
            }
        }
        j++;
    }
}
