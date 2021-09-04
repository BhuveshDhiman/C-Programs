#include <bits/stdc++.h>
using namespace std;

long long maxOf(long long arr[], long long n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

bool isFeasible(long long int arr[], long long int n, long long int woodCut, long long int mid)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            sum += (arr[i] - mid);
        }
    }

    if (sum >= woodCut)
    {
        return true;
    }
    return false;
}

int main()
{
    long long int n;
    cin >> n;

    long long int woodCut;
    cin >> woodCut;

    long long int trees[n];
    for (int i = 0; i < n; i++)
    {
        cin >> trees[i];
    }

    long long int low = 0;
    long long int high = maxOf(trees, n);

    long long int res = 0;

    while (low <= high)
    {
        long long int mid = (low + high) / 2;

        if (isFeasible(trees, n, woodCut, mid))
        {
            res = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << endl
         << res;

    return 0;
}