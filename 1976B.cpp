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

        vector <int> a(n), b(n+1);

        for (int& num : a) cin >> num;
        for (int& num : b) cin >> num;

        long long mini = a[0], maxi = a[0], oper1 = 1, oper2 = MOD;

        for (int x = 0; x < n; x ++)
        {
            oper1 += abs(a[x] - b[x]);

            mini = min(a[x] * 1LL, b[x] * 1LL);
            maxi = max(a[x] * 1LL, b[x] * 1LL);

            if (b[n] >= mini and b[n] <= maxi) oper2 = 0;
            else oper2 = min({oper2, abs(b[n] - mini), abs(b[n] - maxi)});
        }

        cout << (oper1 + oper2) << "\n";
    }

    return 0;
}