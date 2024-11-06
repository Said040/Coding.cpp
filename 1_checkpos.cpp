#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "ENTER A NUMBER: ";
    cin >> number;

    if (number >= 0)
    {
        cout << number << " is a Postive Number!" << endl;
        return 0;
    }
    else if (number < 0)
    {
        cout << number << " is a Negative Number!" << endl;
        return 0;
    }
    else
    {
        return 1;
    }
}