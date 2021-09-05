#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;

        int x[n];
        for (int i = 0; i < n; i++)
            cin >> x[i];

        int m;
        cin >> m;
        int y[m];
        for (int i = 0; i < m; i++)
            cin >> y[i];

        int left = 0, right = 0;
        int s1 = 0, s2 = 0, ma = 0;
        while (left < n && right < m)
        {
            if (x[left] < y[right])
            {
                s1 += x[left++];
            }
            else if (x[left] > y[right])
            {
                s2 += y[right++];
            }
            else
            {
                ma = ma + max(s1, s2) + x[left];
                left++;
                right++;
                s1 = 0;
                s2 = 0;
            }
        }

        while (left < n)
        {
            s1 += x[left++];
        }
        while (right < m)
        {
            s2 += y[right++];
        }

        ma = ma + max(s1, s2);

        cout << ma << endl;
    }

    return 1;
}