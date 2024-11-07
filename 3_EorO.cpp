#include <iostream>
using namespace std;

void checkNumber(string number)
{
    string ones;

    //Check not entire number but the end of number 1234, 4 is even
    for (int i = 0; i < number.length(); i++)
    {
        ones = number[i];
    }

    //prints if even
    if (ones == "0" || ones == "2" || ones == "4" || ones == "6" || ones == "8")
    {
        cout << number << " is a Even Number." << endl;
    }
    //prints if odd
    else
    {
        cout << number << " is a Odd Number." << endl;
    }
}

int main()
{
    string number;
    cout << "Enter A Number: ";
    cin >> number;

    checkNumber(number);
}