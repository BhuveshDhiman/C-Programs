#include <iostream>
using namespace std;

int main()
{
    int x[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        // Check only for upper diagonal
        for (int j = i; j < 3; j++)
        {
            // swap
            int temp = x[i][j];
            x[i][j] = x[j][i];
            x[j][i] = temp;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << x[i][j] << " ";
        cout << "\n";
    }
}
