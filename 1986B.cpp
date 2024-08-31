#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

const int dir[] = {-1, 0, 1, 0, -1};

int getLargestNeighbour(int x, int y, int& n, int& m, vector <vector <int>>& mat)
{
    int maxx = 0;

    for (int d = 1; d < 5; d ++)
    {
        int r = (x + dir[d-1]), c = (y + dir[d]);

        if (r >= 0 and r < n and c >= 0 and c < m) maxx = max(maxx, mat[x + dir[d-1]][y + dir[d]]);
    }

    return maxx;
}

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, n, m;
    cin >> t;

    while (t --)
    {
        cin >> n >> m;

        vector <vector <int>> mat(n, vector <int> (m, 0));

        for (int x = 0; x < n; x ++)
        {
            for (int y = 0; y < m; y ++)
            {
                cin >> mat[x][y];
            }
        }

        for (int x = 0; x < n; x ++)
        {
            for (int y = 0; y < m; y ++)
            {
                cout << min(mat[x][y], getLargestNeighbour(x, y, n, m, mat)) << " ";
            }

            cout << "\n";
        }
    }

    return 0;
}