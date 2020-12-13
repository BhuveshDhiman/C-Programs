#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;

    cout << "\nEnter n\n";
    cin >> n;

    int i, t, s = 0;
    t = n;
    while (t != 0)
    {
        s += pow(t % 10, 3);
        t = t / 10;
    }
    if (s == n)
    {
        cout << "\nArmstrong\n";
    }
    else
    {
        cout << "Not armstrong\n";
    }
}