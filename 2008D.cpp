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

    string s;

    while (t --)
    {
        cin >> n;

        vector <int> perm(n+1, 0), res(n+1, 0);

        for (int x = 1; x <= n; x ++) cin >> perm[x];

        cin >> s;

        vector <int> vis(n+1, 0);

        for (int x = 1; x <= n; x ++)
        {
            if (vis[x]) continue;

            int y = x, b = 0;

            unordered_set <int> indexes;

            while (not vis[y])
            {
                b += (s[y-1] == '0');
                vis[y] = 1;
                indexes.insert(y);
                y = perm[y];
            }

            for (const int& index : indexes) res[index] = b;
        }

        for (int x = 1; x <= n; x ++) cout << res[x] << " ";

        cout << "\n";
    }

    return 0;
}