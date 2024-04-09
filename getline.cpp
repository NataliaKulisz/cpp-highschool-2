// Word counting program
// author: https://github.com/NataliaKulisz
#include <iostream>
using namespace std;
int main()
{
    string word;
    getline(cin, word);
    int sum = 1;
    for (int i = 0; i < word.size(); i++)
        if (word[i] == ' ')
            sum++;

    cout << sum;
    return 0;
}
