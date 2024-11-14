#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

//code to toggle the uppercase and lowercase letters in the given word

void toggleLetter(string word)
{
    string newWord = word;
    for (size_t i = 0; i < word.size(); i++)
    {
        if (isupper(word[i]))
        {
            newWord[i] = tolower(word[i]);
        }
        if (islower(word[i]))
        {
            newWord[i] = toupper(word[i]);
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

    toggleLetter(word);
}