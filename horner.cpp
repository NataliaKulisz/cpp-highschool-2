// Horner's diagram - decimal to binary converter

#include <iostream>
using namespace std;
int horner(string liczba)
{
    int wynik = 0;
    for (int i = 0; i < liczba.size(); i++)
    {
        wynik = wynik * 2 + (liczba[i] - 48);
    }
    return wynik;
}
int main()
{
    string number;
    cin >> number;
    cout << horner(number) << endl;
}
