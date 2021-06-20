#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    const int N = 1e6 + 2;

    int idx[N];

    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minIdx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (idx[x[i] != -1])
        {
            minIdx = min(minIdx, idx[x[i]]);
        }
        else
        {
            idx[x[i]] = i;
        }
    }

    if (minIdx == INT_MAX)
    {
        cout << "-1\n";
    }
    else
    {
        cout << minIdx << "\n";
    }
    cout << "FFF";
    return 0;
}