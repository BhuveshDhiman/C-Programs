#include <iostream>
using namespace std;
// All possible ways to reach destn in a n*n maze

int ways(int n, int i, int j)
{
    if (i == n - 1 || j == n - 1)
        return 1;

    if (i == n || j == n)
        return 0;

    return ways(n, i + 1, j) + ways(n, i, j + 1);
}

int main()
{
    cout << ways(3, 0, 0);
    return 0;
}