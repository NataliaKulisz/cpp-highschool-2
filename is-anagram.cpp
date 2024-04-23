// The script checks if a word is an anagram.
// author: https://github.com/NataliaKulisz

#include <iostream>
using namespace std;

string sort(string word)
{
    string result;
    char tab[26] = {0};
    for (int i = 0; i < word.size(); i++)
    {
        tab[word[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        while (tab[i] != 0)
        {
            result += char(i + 'a');
            tab[i]--;
        }
    }
    return result;
}

int main()
{
    string m, n;
    cin >> m >> n;
    if (sort(m) == sort(n))
        cout << "yes";
    else
        cout << "no";

    return 0;
}
