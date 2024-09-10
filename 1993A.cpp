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

        vector <int> correct(4, n);

        int score = 0;

        for (char& c : s)
        {
            if ((c != '?') and correct[c - 'A'])
            {
                score ++;
                correct[c - 'A'] --;
            }
        }

        cout << (score) << "\n";
    }

    return 0;
}