#include <iostream>
using namespace std;

void removeCharacters(string word)
{
    string newWord = "";
    for (int i = 0; i < word.length(); i++)
    {
        if (isalpha(word[i]))
        {
            newWord += word[i];
        }
    }
    cout << "Before: " << word << endl;
    cout << "After: " << newWord << endl;
}

int main()
{
    string word;
    cout << "Enter a Word: ";
    cin >> word;

    removeCharacters(word);
}