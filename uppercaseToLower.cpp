#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[20];

    cout << "Enter a string\n";
    cin >> s;

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 65 && s[i] < 97)
        {
            s[i] += 32;
        }
    }

    cout << "\nLowercase:\n";

    for (int i = 0; i < strlen(s); i++)
    {
        cout << s[i];
    }
}