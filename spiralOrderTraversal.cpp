#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int x[n][m];

    cout << "Enter elements\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> x[i][j];
    }

    // Spiral order

    int row_start = 0, col_start = 0, row_end = n - 1, col_end = m - 1;

    while (row_start <= row_end && col_start <= col_end)
    {
        // for row_start
        for (int col = col_start; col <= col_end; col++)
        {
            cout << x[row_start][col] << " ";
        }
        row_start++;
        cout << "\n";

        // for col_end
        for (int row = row_start; row <= row_end; row++)
        {
            cout << x[row][col_end] << " ";
        }
        col_end--;
        cout << "\n";

        // for row_end
        for (int col = col_end; col >= col_start; col--)
        {
            cout << x[row_end][col] << " ";
        }
        row_end--;
        cout << "\n";

        // for col_start
        for (int row = row_end; row >= row_start; row--)
        {
            cout << x[row][col_start] << " ";
        }
        col_start++;
        cout << "\n";
    }

    return 0;
}