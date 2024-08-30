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

        int num, sum = 0;

        for (int i = 0; i < n; i ++)
        {
            cin >> num;

            sum += ((i & 1) ? (-num) : num);
        }

        cout << (sum) << "\n";
    }

    return 0;
}