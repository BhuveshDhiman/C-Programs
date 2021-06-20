#include <iostream>
using namespace std;

int kadane(int arr[], int n)
{

    int currSum = 0;
    int maxsum = arr[0];
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];

        if (currSum < 0)
        {
            currSum = 0;
        }

        maxsum = max(maxsum, currSum);
    }

    return maxsum;
}

int main()
{

    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    int wrapSum, noWrapSum;

    noWrapSum = kadane(x, n);

    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += x[i];
        x[i] = -x[i];
    }

    wrapSum = totalSum + kadane(x, n);

    cout << max(noWrapSum, wrapSum) << "\n";

    return 0;
}