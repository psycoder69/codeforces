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

        vector <int> nums(n);

        long long int maxOdd = 0, even = 0;

        for (int& num : nums)
        {
            cin >> num;

            if (num & 1) maxOdd = max(maxOdd, num * 1LL); else even ++;
        }

        int oper = 0;

        if (maxOdd and even)
        {
            sort(begin(nums), end(nums));

            bool flag = 0;

            for (int& num : nums)
            {
                if (not (num & 1))
                {
                    oper ++;

                    if (maxOdd < num) flag = 1;

                    maxOdd += num;
                }
            }

            oper += flag;
        }

        cout << (oper) << "\n";
    }

    return 0;
}