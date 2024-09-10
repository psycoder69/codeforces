#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t;
    cin >> t;

    int a, b, c;

    while (t --)
    {
        cin >> a >> b >> c;

        priority_queue <int, vector <int>, greater <int>> pq;

        pq.push(a);
        pq.push(b);
        pq.push(c);

        for (int x = 0; x < 5; x ++)
        {
            int top = pq.top();
            pq.pop();

            pq.push(top + 1);
        }

        int product = 1;

        while (not pq.empty())
        {
            product *= pq.top();
            pq.pop();
        }

        cout << (product) << "\n";
    }

    return 0;
}