#include <bits/stdc++.h>
using namespace std;

string solve(int a, int b)
{
    // if one pile is too small then it will become 0 early
    // if a = 7 and b = 3 then smaller pile will become 0 and stuck -->impossible
    if ((a + b) % 3 == 0 && max(a, b) <= 2 * min(a, b))
    {
        return "YES"; // we can remove either 1 2 or 2 1 total is 3
        // if we able to divide the total by 3 then we can balance the piles
    }
    else
    {
        return "NO"; // impossible to balance
    }
    return "";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        // Each move removes at least one coin from each pile,
        // so the number of coins in a pile must be atmost twice the number of coins in the other pile.
        cout << solve(a, b) << "\n";
    }

    // Small pile must survive long enough.
    // That happens only if:
    // big pile <= 2 × small pile
    return 0;
}