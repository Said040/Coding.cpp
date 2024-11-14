#include <iostream>
#include <cctype>
using namespace std;

void isAlpha(char letter)
{
    char l = letter;
    if (isalpha(l))
    {
        cout << l << " is a Letter!" << endl;
    }
    else
    {
        cout << l << " is not a Letter!" << endl;
    }
}

int main()
{
    char letter;

    cout << "Enter a Letter: ";
    cin >> letter;

    isAlpha(letter);
}