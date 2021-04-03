#include <iostream>
using namespace std;
// Check if array is sorted or not
bool sorted(int x[], int n)
{

    if (n == 1)
        return true;

    return (x[0] < x[1] && sorted(x + 1, n - 1));
}

int main()
{
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
        cin >> x[i];

    cout << "\n"
         << sorted(x, n);

    return 0;
}