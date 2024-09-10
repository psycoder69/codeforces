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

    string x, y;

    while (t --)
    {
        cin >> x >> y;

        swap(x[0], y[0]);

        cout << (x) << " " << (y) << "\n";
    }

    return 0;
}