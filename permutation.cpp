#include <iostream>
using namespace std;
// All permutations of a string

void permutation(string s, string ans)
{

    if (s.length() == 0)
    {
        cout << ans << "\n";
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string rest = s.substr(0, i) + s.substr(i + 1);

        permutation(rest, ans + ch);
    }
}

int main()
{
    permutation("ABC", "");
    return 0;
}