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

        int cuts = 1, middle = 0;

        for (int x = 1; x < s.length(); x ++)
        {
            cuts += (s[x-1] != s[x]);

            middle |= (s[x-1] == '0' and s[x] == '1');
        }

        cout << (cuts - middle) << "\n";
    }

    return 0;
}