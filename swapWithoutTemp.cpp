#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout << "\nEnter 2 numbers\n";
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nSwapped\n\n";
    cout << a << "\t" << b;
}
