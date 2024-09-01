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

    string x, y;

    while (t --)
    {
        cin >> n;
        cin >> x;
        cin >> y;

        bool interesting = 1;

        for (int i = 0; i < n; i ++)
        {
            if (x[i] - '0') break;

            if (x[i] != y[i])
            {
                interesting = 0;
                break;
            }
        }

        cout << (interesting ? "YES\n" : "NO\n");
    }

    return 0;
}