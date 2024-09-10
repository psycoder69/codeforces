#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t;
    cin >> t;

    string s;

    while (t --)
    {
        cin >> s;

        vector <bool> letters(26, 0);

        for (char& c : s) letters[c - 'a'] = 1;

        char c = '0';

        for (int x = 0; x < 26; x ++)
        {
            if (not letters[x])
            {
                c = ('a' + x);
                break;
            }
        }

        for (int x = 1; x < s.length(); x ++)
        {
            if (s[x-1] == s[x])
            {
                s.insert(x, 1, c);
                c = '0';
                break;
            }
        }

        if (c != '0') s.push_back(c);

        cout << (s) << "\n";
    }

    return 0;
}