#include <iostream>
#include <cctype>
using namespace std;

//code to count the number of vowels in a given word

void countVowel(string word)
{
    int vowels = 0;
    for (int i = 0; i < word[i]; i++)
    {
        word[i] = toupper(word[i]);
        if (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
        {
            vowels += 1;
        }
    }
    cout << "There Are "<< vowels << " Vowels in '" << word << "'." << endl;
}

int main()
{
    string word;
    cout << "Enter a Word: ";
    cin >> word;

    countVowel(word);
}