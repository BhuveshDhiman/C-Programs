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

    int ans = 2;
    int pd = x[1] - x[0];
    int j = 2;
    int curr = 2;

    while (j < n)
    {
        if (pd == x[j] - x[j - 1])
        {
            curr++;
        }
        else
        {
            pd = x[j] - x[j - 1];
            curr = 2;
        }

        ans = max(ans, curr);

        j++;
    }

    cout << ans << "\n";

    return 0;
}