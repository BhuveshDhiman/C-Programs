#include <iostream>
using namespace std;

void swap(char *a, char *b)
{
    char *c;
    c = a;
    a = b;
    b = c;

    cout << "\nSwapped\n";

    cout << a << "\n"
         << b;
}

int main()
{
    char a[10], b[10];

    cout << "\nEnter a string\n";
    cin >> a;

    cout << "\nEnter a string\n";
    cin >> b;

    swap(a, b);
}