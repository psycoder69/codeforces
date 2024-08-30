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

        int x = 0;

        unordered_map <int, int> freq;

        for (int i = 0; i < n; i ++)
        {
            cin >> x;

            freq[x] ++;
        }

        bool alice = 0;

        for (auto& [num, count] : freq)
        {
            if (count & 1)
            {
                alice = 1;
                break;
            }
        }

        cout << (alice ? "YES\n" : "NO\n");
    }

    return 0;
}