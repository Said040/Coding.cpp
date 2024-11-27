//Program to get the factoral number
#include <iostream>
using namespace std;

void getFactoral(int number)
{
    int factoralNumber = 1;
    for (int i = 1; i <= number; i++)
    {
        factoralNumber = factoralNumber * i;
    }
    cout << "The Factorial of " << number << " is " << factoralNumber << endl;
}

int main()
{
    int number;
    cout << "Enter a Number to Factoral: ";
    cin >> number;

    getFactoral(number);
}