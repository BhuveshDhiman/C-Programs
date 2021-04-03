#include <iostream>
using namespace std;
// All possible ways to reach destn

int ways(int s, int e)
{

    if (s == e)
        return 1;

    if (s > e)
        return 0;

    int cnt = 0;
    // Dice
    for (int i = 1; i <= 6; i++)
    {
        cnt = cnt + ways(s + i, e);
    }

    return cnt;
}

int main()
{
    cout << ways(0, 4);
    return 0;
}