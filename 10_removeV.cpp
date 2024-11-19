#include <iostream>
using namespace std;

string removeVowel(string word)
{
    string newWord = "";
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] != 'A' && word[i] != 'E' && word[i] != 'I' && word[i] != 'O' && word[i] != 'U' &&
        word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u')
        {
            newWord += word[i];
        }
    }
    return newWord;
}

int main()
{
    string word;
    cout << "Enter A Word: ";
    cin >> word;

    string newWord = removeVowel(word);
    cout << "Before: " << word << endl;
    cout << "After: " << newWord << endl;
}