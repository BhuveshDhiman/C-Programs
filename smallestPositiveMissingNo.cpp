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
    bool check[N];

    for (int i = 0; i < N; i++)
    {
        check[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        if (x[i] >= 0)
        {
            check[x[i]] = true;
        }
    }

    int ans = -1;

    for (int i = 1; i < N; i++)
    {

        if (check[i] == false)
        {
            ans = i;
            break;
        }
    }

    cout << ans << "\n";

    return 0;
}
