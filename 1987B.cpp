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

        vector <int> nums(n);

        for (int& num : nums) cin >> num;

        vector <int> diff;

        long long int maxx = 0, coins = 0, maxDiff = 0;

        for (int x = 0; x < n; x ++)
        {
            maxx = max(maxx, nums[x] * 1LL);
            coins += (maxx - nums[x]);

            maxDiff = max(maxDiff, maxx - nums[x]);
        }

        cout << (coins + maxDiff) << "\n";
    }

    return 0;
}