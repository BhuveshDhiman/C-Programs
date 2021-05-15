#include <iostream>
using namespace std;
// All possible ways to place 2*1 tiles on 2*n floor

int ways(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return ways(n - 1) + ways(n - 2);
}

int main()
{
    cout << ways(4);
    return 0;
}