#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, n, m;
    cin >> t;

    while (t --)
    {
        cin >> n >> m;

        long long num, maxi = 0;

        for (int x = 0; x < n; x ++)
        {
            cin >> num;

            maxi = max(maxi, num);
        }

        char c;

        int l, r;

        while (m --)
        {
            cin >> c >> l >> r;

            if (maxi >= l and maxi <= r) maxi += (c == '-' ? (-1) : 1);

            cout << (maxi) << " ";
        }

        cout << "\n";
    }

    return 0;
}