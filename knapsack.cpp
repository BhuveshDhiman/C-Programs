#include <iostream>
using namespace std;
// All possible ways to do a big robbery

int ways(int w[], int val[], int n, int W)
{
    if (n == 0 || W == 0)
        return 0;

    if (w[n - 1] > W)
    {
        // Do not include
        ways(w, val, n - 1, W);
    }

    return max(ways(w, val, n - 1, W - w[n - 1]) + val[n - 1], ways(w, val, n - 1, W));
}

int main()
{
    int w[] = {10, 20, 30};
    int val[] = {100, 50, 150};
    int W = 50;

    cout << ways(w, val, 3, W);
    return 0;
}