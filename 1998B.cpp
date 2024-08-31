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

        vector <int> perm(n);

        for (int& num : perm) cin >> num;

        for (int x = 1; x < n; x ++) cout << perm[x] << " ";

        cout << perm[0] << "\n";
    }

    return 0;
}