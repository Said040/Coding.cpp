#include <iostream>
using namespace std;

//Find length of string without strlen()

void lengthWord(string word)
{
    int count = 0;
    for (int i = 0; i < word[i]; i++)
    {
        count += 1;
    }
    cout << "'" << word << "'" << " has " << count << " Words!" << endl;
}

int main()
{
    string word;
    cout << "Enter a Word: ";
    cin >> word;

    lengthWord(word);
}