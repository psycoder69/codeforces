#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, n;
    cin >> t;

    while (t --)
    {
        cin >> n;

        if (n & 1)
        {
            int m = ((n + 1) >> 1);

            for (int x = n; x > m; x --) cout << (x) << " ";
            for (int x = 1; x <= m; x ++) cout << (x) << " ";
        }
        else cout << (-1);

        cout << "\n";
    }

    return 0;
}