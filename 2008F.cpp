#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

long long modExp(long long base, long long exp)
{
    long long res = 1;

    base %= MOD;

    while (exp)
    {
        if (exp & 1) res = ((res * base) % MOD);

        exp >>= 1;
        base = ((base * base) % MOD);
    }

    return res;
}

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

        vector <long long> nums(n);

        long long sum = 0;

        for (long long& num : nums)
        {
            cin >> num;
            sum += num;
        }

        long long p = 0, q = ((((n - 1) * 1LL * n) >> 1) % MOD);

        for (long long& num : nums)
        {
            sum -= num;
            p += (num * (sum % MOD));
            p %= MOD;
        }

        long long qInv = modExp(q, MOD - 2);

        cout << (((p % MOD) * (qInv % MOD)) % MOD) << "\n";
    }

    return 0;
}