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

    long long m;

    while (t --)
    {
        cin >> n >> m;

        vector <int> nums(n);

        for (int& num : nums) cin >> num;

        sort(begin(nums), end(nums));

        long long sum = 0, maxi = 0;

        for (int x = 0, y = 0; y < n; y ++)
        {
            sum += nums[y];

            while ((nums[y] - nums[x]) > 1) sum -= nums[x ++];

            while (sum > m) sum -= nums[x ++];

            maxi = max(maxi, sum);
        }

        cout << (maxi) << "\n";
    }

    return 0;
}