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

    int a1, a2, b1, b2;

    while (t --)
    {
        cin >> a1 >> a2 >> b1 >> b2;

        int ways = 0;

        ways += ((a1 > b1 and a2 > b2) or (a1 == b1 and a2 > b2) or (a1 > b1 and a2 == b2));
        ways += ((a1 > b2 and a2 > b1) or (a1 == b2 and a2 > b1) or (a1 > b2 and a2 == b1));

        cout << (ways << 1) << "\n";
    }

    return 0;
}