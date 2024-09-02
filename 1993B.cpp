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

        priority_queue <long long int> odd;

        priority_queue <long long int, vector <long long int>, greater <long long int>> even;

        long long int x = 0, e = 0;

        for (int i = 0; i < n; i ++)
        {
            cin >> x;

            if (x & 1) odd.push(x);
            else
            {
                e = max(e, x);
                even.push(x);
            }
        }

        int oper = 0;

        if (not odd.empty())
        {
            while (not even.empty())
            {
                if (odd.top() > even.top())
                {
                    odd.push(odd.top() + even.top());
                    even.pop();
                }
                else
                {
                    x = (odd.top() + e);
                    odd.pop();

                    odd.push(x);
                }

                oper ++;
            }
        }

        cout << (oper) << "\n";
    }

    return 0;
}