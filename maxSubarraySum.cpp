#include <iostream>
#include <climits>
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

    int mx = x[0];
    // Bruteforce O(n^3)
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         int sum = 0;
    //         for (int k = i; k <= j; k++)
    //         {
    //             sum += x[k];
    //         }
    //         mx = max(mx, sum);
    //     }
    // }

    // Optimized - Cumulative sum approach
    // int currSum[n + 1];
    // currSum[0] = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     currSum[i] = currSum[i - 1] + x[i - 1];
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     int sum = 0;

    //     for (int j = 0; j < i; j++)
    //     {
    //         sum = currSum[i] - currSum[j];
    //         mx = max(sum, mx);
    //     }
    // }

    // More optimmized - Kadane's algo - O(n)

    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += x[i];
        if (currSum < 0)
        {
            currSum = 0;
        }

        mx = max(mx, currSum);
    }

    cout << mx << "\n";

    return 0;
}