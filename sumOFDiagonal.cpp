#include <iostream>
using namespace std;
int main()
{
    int r, x[5][5], s = 0;

    cout << "Enter number of rows\n";
    cin >> r;

    cout << "\nEnter matrix\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cin >> x[i][j];

            if (i == j)
            {
                s = s + x[i][j];
            }
        }
    }

    cout << "\nSum of diagonal elements = " << s;
}