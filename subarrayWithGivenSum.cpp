#include <iostream>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;

    int x[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    int i = 0, j = 0, start = -1, end = -1, sum = 0;

    while (j < n && sum + x[j] <= s)
    {
        sum += x[j];
        j++;
    }

    if (sum == s)
    {
        cout << i + 1 << " " << j << "\n";
        return 0;
    }

    while (j < n)
    {
        sum += x[j];
        while (sum > s)
        {
            sum -= x[i];
            i++;
        }

        if (sum == s)
        {
            start = i + 1;
            end = j + 1;
            break;
        }
        j++;
    }
    cout << start << " " << end << "\n";
    return 0;
}
