// The script prints all anagrams of the word 'film'.
// author: https://github.com/NataliaKulisz

#include <iostream>
using namespace std;

char word[5] = "film";

int main()
{
    int i1, i2, i3, i4;

    for (i1 = 0; i1 < 4; i1++)
    {
        for (i2 = 0; i2 < 4; i2++)
        {
            if (i1 == i2)
                continue;
            for (i3 = 0; i3 < 4; i3++)
            {
                if (i3 == i1 || i3 == i2)
                    continue;
                i4 = 6 - i1 - i2 - i3;
                cout << word[i1] << word[i2] << word[i3] << word[i4] << endl;
            }
        }
    }
}
