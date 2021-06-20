#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x[n + 1];
    x[n + 1] = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    if (n == 1)
    {
        cout << 1 << "\n";
        return 0;
    }

    int ans = 0;
    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        if (x[i] > mx && x[i] > x[i + 1])
        {
            ans++;
        }
        mx = max(mx, x[i]);
    }

    cout << ans << "\n";

    return 0;
}