#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, n, k;
    cin >> t;

    while (t --)
    {
        cin >> n >> k;

        int m = (n / k);

        string x[n], y[m];

        for (int i = 0; i < n; i ++) cin >> x[i];

        for (int i = 0; i < m; i ++) y[i] = string(m, '0');

        for (int i = 0; i < n; i += k)
        {
            for (int j = 0; j < n; j += k)
            {
                y[i / k][j / k] = x[i][j];
            }
        }

        for (int i = 0; i < m; i ++) cout << y[i] << "\n";
    }

    return 0;
}