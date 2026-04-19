#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;

        // Because square must be large enough to include both row and column.
        ll m = max(x, y);
        // gives you previous layer elements
        ll r = (m - 1) * (m - 1);

        // two cases
        // if the max range is even then it starts from upper right corner
        // to lower right corner
        // similarly for odd case it starts from lower left corner to upper-right corner
        if (m % 2 == 0)
        {
            // we start from the current layer by adding prev layer elements
            r += x + m - y;
        }
        else
        {
            r += y + m - x;
        }

        cout << r << endl;
    }
    return 0;
}