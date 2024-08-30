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

        for (int& x : a) cin >> x;
        for (int& x : b) cin >> x;

        bool alice = 0;

        if (n > 2) alice = (a != b);

        cout << (alice ? "Alice\n" : "Bob\n");
    }

    return 0;
}