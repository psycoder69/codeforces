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

        vector <int> a(n), b(n);

        for (int& num : a) cin >> num;
        for (int& num : b) cin >> num;

        bool bob = (a == b);

        if (not bob)
        {
            reverse(begin(a), end(a));

            bob = (a == b);
        }

        cout << (not bob ? "Alice\n" : "Bob\n");
    }

    return 0;
}