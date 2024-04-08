// Game - guess the number
// author: https://github.com/NataliaKulisz
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(NULL));
    int number = rand() % 100 + 1, shot = 0, counter = 1;

    cout << "Guess the number: ";
    cin >> shot;

    while (number != shot)
    {
        if (shot > number)
            cout << "Too big" << endl;

        if (number > shot)
            cout << "Too small" << endl;
        counter++;
        cin >> shot;
    }

    cout << "You guessed in the " << counter << " time";
    return 0;
}
