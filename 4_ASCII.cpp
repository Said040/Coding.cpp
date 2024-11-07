#include <iostream>
using namespace std;

void ascii(char l)
{
    cout << "Enter A Letter: ";
    cin >> l;
    cout << "ASCII Value of " << l << " is " << int(l) << endl;
}
int main()
{
    char l;
    ascii(l);
}