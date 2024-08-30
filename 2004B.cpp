#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t;
    cin >> t;

    int l1, r1, l2, r2;

    while (t --)
    {
        cin >> l1 >> r1;
        cin >> l2 >> r2;

        int l = max(l1, l2), r = min(r1, r2);

        l -= (l1 < l or l2 < l);
        r += (r1 > r or r2 > r);

        cout << max(1, r - l) << "\n";
    }

    return 0;
}