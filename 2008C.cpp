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

    long long l, r;

    while (t --)
    {
        cin >> l >> r;

        long long gap = ((r - l) << 1);

        cout << ((1 + (int) sqrt(1 + (gap * 4))) >> 1) << "\n";
    }

    return 0;
}