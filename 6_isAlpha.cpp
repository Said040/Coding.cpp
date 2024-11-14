#include <iostream>
#include <cctype>
using namespace std;

void isAlpha(char letter)
{
    char l = letter;
    if (isalpha(l))
    {
        cout << l << " is in the Alphabet!" << endl;
    }
    else
    {
        cout << l << " is not in the Alphabet!" << endl;
    }
}

int main()
{
    char letter;

    cout << "Enter a letter in the Alphabet: ";
    cin >> letter;

    isAlpha(letter);
}