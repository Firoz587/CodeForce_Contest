#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isVowel(char ch)
{
    return (ch == 'a' || ch == 'e');
}

string splitIntoSyllables(const string& word)
{
    string syllables;

    for (int i = 0; i < word.length(); ++i)
    {
        if (i > 0)
        {
            if ((isVowel(word[i - 1]) || isVowel(word[i])))
        {
            syllables += ".";
        }
    }
    syllables += word[i];
    }

    return syllables;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string word;
        cin >> word;

        string result = splitIntoSyllables(word);

        cout << result << endl;
    }

    return 0;
}

