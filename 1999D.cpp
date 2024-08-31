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

    string x, y;

    while (t --)
    {
        cin >> x >> y;

        int i = 0, n = y.length();

        for (char& c : x)
        {
            if (c == '?')
            {
                if (i < n) c = y[i ++]; else c = 'a';
            }
            else if (i < n and c == y[i]) i ++;
        }

        cout << (i == n ? "YES\n" : "NO\n") << (i == n ? (x + "\n") : "");
    }

    return 0;
}