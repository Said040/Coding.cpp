#include <iostream>
using namespace std;

void checkl(char l)
{
    if (l == 'A' || l == 'E' || l == 'I' || l == 'O' || l == 'U' ||
        l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u')
    {
        cout << l << " is a Vowel!" << endl;
    }
    else
    {
        cout << l << " is a Consonant!" << endl;
    }
}

int main()
{
    char l;
    cout << "Enter a Letter: ";
    cin >> l;

    checkl(l);
}