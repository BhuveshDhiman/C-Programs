#include <iostream>
using namespace std;
int main()
{
    int x[5][5], y[5][5], i, j, r, c;

    cout << "\nEnter rows and columns\n";
    cin >> r >> c;

    cout << "\nEnter first matrix\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> x[i][j];
        }
    }

    cout << "\nEnter second matrix\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> y[i][j];
        }
    }

    cout << "\nSum =\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << x[i][j] + y[i][j] << "\t";
        }
        cout << "\n";
    }
}
