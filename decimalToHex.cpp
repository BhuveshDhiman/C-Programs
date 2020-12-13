#include <iostream>

using namespace std;

int main()
{

    int d, i = 0, n, b[10];

    cout << "\nEnter a decimal number\n";
    cin >> d;

    n = d;

    while (n != 0)
    {
        b[i] = n % 16;
        i++;
        n = n / 16;
    }

    cout << "\nHex = \n";

    for (i = i - 1; i >= 0; i--)
    {
        cout << b[i];
    }
}