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

        vector <int> costs(n);

        for (int& cost : costs) cin >> cost;

        sort(rbegin(costs), rend(costs));

        for (int x = 1; k and x < n; x += 2)
        {
            int d = min(costs[x-1] - costs[x], k);

            k -= d;
            costs[x] += d;
        }

        long long int alice = 0, bob = 0;

        for (int x = 0; x < n; x ++)
        {
            if (x & 1) bob += costs[x]; else alice += costs[x];
        }

        cout << (alice - bob) << "\n";
    }

    return 0;
}