#include <bits/stdc++.h>
#define int long long int
using namespace std;

bool isFeasible(int *chefs, int n, int mid, int p)
{
    int time = 0;
    int parathas = 0;

    for (int i = 0; i < n; i++)
    {
        time = chefs[i];
        int j = 2;

        while (time <= mid)
        {
            parathas++;
            time += j * chefs[i];
            j++;
        }

        if (parathas >= p)
            return true;
    }

    return false;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int p;
        cin >> p;

        int n;
        cin >> n;
        int chefs[n];
        for (int i = 0; i < n; i++)
            cin >> chefs[i];

        int low = 0;
        int high = 1e8;
        int ans = 0;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (isFeasible(chefs, n, mid, p))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        cout << ans << endl;
    }

    return 1;
}