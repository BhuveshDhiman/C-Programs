#include <iostream>
using namespace std;

//  Bruteforce - O(n^2)
bool pairSum(int arr[], int n, int k)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << i << " " << j << "\n";
                return true;
            }
        }
    }
    return false;
}

//  O(n) - Using 2 pointer
bool pairSum2(int arr[], int n, int k)
{

    int low = 0, high = n - 1;

    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << low << " " << high << "\n";
            return true;
        }
        else if (arr[low] + arr[high] < k)
        {
            low++;
        }
        else
        {
            high--;
        }
    }

    return false;
}

int main()
{
    // int n;
    // cin >> n;

    // int x[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> x[i];
    // }

    int x[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int k = 31;

    // cout << pairSum(x, 8, k);
    cout << pairSum2(x, 8, k);

    return 0;
}