#include <iostream>
using namespace std;
void desc(int n)
{
    if (n == 0)
        return;

    cout << n << " ";
    desc(n - 1);
}

void asc(int n)
{
    if (n == 0)
        return;
    asc(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    // desc(n);
    cout << "\n";
    asc(n);

    return 0;
}