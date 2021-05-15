#include <iostream>
using namespace std;

int divisible(int n, int a, int b)
{
    int x = n / a;
    int y = n / b;
    int z = n / (a * b);

    return x + y - z;
}

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    cout << divisible(n, a, b);

    return 0;
}