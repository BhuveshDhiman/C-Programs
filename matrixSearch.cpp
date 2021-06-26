// Rows and cols and sorted

#include <iostream>
using namespace std;
int main()
{
    int n, m, target;
    cin >> n >> m;
    cin >> target;

    int x[n][m];

    cout << "Enter elements\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> x[i][j];
    }

    int r = 0, c = m - 1;
    bool found = false;

    while (r < n && c >= 0)
    {
        if (x[r][c] == target)
        {
            found = true;
        }

        if (x[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    cout << found;
}
