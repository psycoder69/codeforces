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

    string x;

    while (t --)
    {
        cin >> x;

        bool valid = 0;

        if (x.length() > 2 and x[2] != '0')
        {
            int num1 = stoi(x.substr(0, 2)), num2 = stoi(x.substr(2));

            valid = ((num1 == 10) and (num2 >= 2));
        }

        cout << (valid ? "YES\n" : "NO\n");
    }

    return 0;
}