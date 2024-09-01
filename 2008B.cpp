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

    string s;

    while (t --)
    {
        cin >> n;
        cin >> s;

        bool possible = 0;

        int x = sqrt(n);

        if ((x * x) == n)
        {
            possible = 1;

            vector <vector <bool>> grid(x, vector <bool> (x, 0));

            for (int i = 0; i < s.length(); i ++)
            {
                grid[i / x][i % x] = (s[i] - '0');
            }

            for (int i = 0; i < x; i ++)
            {
                for (int j = 0; j < x; j ++)
                {
                    if (not i or not j or (i == x-1) or (j == x-1))
                    {
                        if (grid[i][j] == 0)
                        {
                            possible = 0;
                            break;
                        }
                    }
                    else
                    {
                        if (grid[i][j] == 1)
                        {
                            possible = 0;
                            break;
                        }
                    }
                }
            }
        }

        cout << (possible ? "Yes\n" : "No\n");
    }

    return 0;
}