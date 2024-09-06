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

        vector <bool> nums(n+2, 0);

        bool valid = 1;

        for (int i = 0, x = 0; i < n; i ++)
        {
            cin >> x;

            nums[x] = 1;

            if ((i > 0) and (not (nums[x-1] or nums[x+1]))) valid = 0;
        }

        cout << (valid ? "YES\n" : "NO\n");
    }

    return 0;
}