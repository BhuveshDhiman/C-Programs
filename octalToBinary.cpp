#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int o, d, i = 0, n, b[10], s = 0;

    cout << "\nEnter a octal number\n";
    cin >> o;

    n = o;

    for (i = 0; n != 0; i++)
    {
        s = s + (n % 10) * pow(8, i);
        n = n / 10;
    }

    n = s;
    i = 0;

    while (n != 0)
    {
        b[i] = n % 2;
        i++;
        n = n / 2;
    }

    cout << "\nBinary = \n";

    for (i = i - 1; i >= 0; i--)
    {
        cout << b[i];
    }
}