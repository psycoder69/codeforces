#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, a, b;
    cin >> t;

    while (t --)
    {
        cin >> a >> b;

        b = (b & 1);

        bool possible = 1;

        if (b)
        {
            if (a < 2) possible = 0; else a -= 2;
        }

        cout << (possible and (not (a & 1)) ? "YES\n" : "NO\n");
    }

    return 0;
}