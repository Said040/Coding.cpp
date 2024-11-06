#include <iostream>
using namespace std;

void findMax(int a,int b,int c)
{
    int max_num = a;

    if (max_num <= b)
        max_num = b;
    if (max_num <= c)
        max_num = c;
    cout << max_num << " is the Biggest Number!" << endl;
}

int main()
{
    int a, b, c;

    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    cout << "Enter Third Number: ";
    cin >> c;

    findMax(a, b , c);


}