#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, n, m, k;
    cin >> t;

    while (t --)
    {
        cin >> n >> m >> k;

        for (int x = n; x > m; x --) cout << (x) << " ";
        for (int x = 1; x <= m; x ++) cout << (x) << " ";

        cout << "\n";
    }

    return 0;
}