// The script counts the number of occurrences of individual letters in the given word.
// author: https://github.com/NataliaKulisz

#include <iostream>
using namespace std;

int main()
{
    string word;
    char tab[26] = {0};
    cin >> word;

    for (int i = 0; i < word.size(); i++)
    {
        tab[word[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (tab[i] != 0)
            cout << char(i + 97) << ": " << int(tab[i]) << endl;
    }

    return 0;
}
