#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, n, m;
    cin >> t;

    while (t --)
    {
        cin >> n;

        vector <int> nums(n);

        for (int& num : nums) cin >> num;

        cin >> m;

        string s;

        while (m --)
        {
            cin >> s;

            bool isValid = 0;

            if (s.length() == n)
            {
                isValid = 1;

                unordered_map <int, int> m1, m2;

                for (int x = 0; x < n; x ++)
                {
                    if ((m1.find(s[x]) != m1.end() and m1[s[x]] != nums[x]) or (m2.find(nums[x]) != m2.end() and m2[nums[x]] != s[x]))
                    {
                        isValid = 0;
                        break;
                    }

                    m1[s[x]] = nums[x];
                    m2[nums[x]] = s[x];
                }
            }

            cout << (isValid ? "YES\n" : "NO\n");
        }
    }

    return 0;
}