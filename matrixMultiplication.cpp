#include <iostream>
using namespace std;

int main()
{
    int x[3][4] = {{2, 4, 1, 2}, {8, 4, 3, 6}, {1, 7, 9, 5}};
    int y[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {4, 5, 6}};
    int ans[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            ans[i][j] = 0;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                ans[i][j] += x[i][k] * y[k][j];
            }
        }
    }

    // print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << ans[i][j] << " ";
        cout << "\n";
    }
}
