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

    string num;

    while (t --)
    {
        cin >> n;
        cin >> num;

        int z = 0, zero = 0, one = 0;

        for (char& c : num)
        {
            if (c - '0') one ++, zero += (z > 0), z = 0; else z ++;
        }

        zero += (z > 0);

        cout << (one > zero ? "YES\n" : "NO\n");
    }

    return 0;
}