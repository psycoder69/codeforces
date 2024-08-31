#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

bool canMakeThreeRegions(int x, int y, int& n, vector <vector <char>>& grid)
{
    if (y == 0 or y == n-1) return 0;

    return (grid[x][y-1] == '.' and grid[x][y+1] == '.' and ((x > 0 and grid[x-1][y] == '.') or (x < 1 and grid[x+1][y] == '.')) and ((x > 0 and grid[x-1][y-1] == 'x' and grid[x-1][y+1] == 'x') or (x < 1 and grid[x+1][y-1] == 'x' and grid[x+1][y+1] == 'x')));
}

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

        vector <vector <char>> grid(2, vector <char> (n, '0'));

        for (int x = 0; x < 2; x ++)
        {
            for (int y = 0; y < n; y ++)
            {
                cin >> grid[x][y];
            }
        }

        int cells = 0;

        for (int x = 0; x < 2; x ++)
        {
            for (int y = 0; y < n; y ++)
            {
                cells += canMakeThreeRegions(x, y, n, grid);
            }
        }

        cout << (cells) << "\n";
    }

    return 0;
}