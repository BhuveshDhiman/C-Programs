#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[20], t[20];
    int cnt = 0;

    cout << "Enter a string\n";
    cin >> s;

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            t[cnt] = s[i];
            cnt++;
        }
    }

    strcpy(s, t);

    cout << "\n";
    for (int i = 0; i < cnt; i++)
    {
        cout << s[i];
    }
}