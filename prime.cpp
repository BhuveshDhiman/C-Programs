#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, i;

    cout << "\nEnter n\n";
    cin >> n;
    int flag = 0;

    if (n <= 1)
    {
        flag = 1;
        cout << "Not prime";
    }
    for (i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "\nNot prime\n";
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "\nPrime\n";
    }
}