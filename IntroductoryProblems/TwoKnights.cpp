#include <bits/stdc++.h>
using namespace std;

int solve(string s)
{
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // k == 1 2 3 .. n boards for each board we need to find the
        // how to place two knights so that they cannot attack
        long long k = i * i;
        // to know combinations to place two knights n(n - 1) / 2;
        // knight moves only 2 steps in one direction and 1 step sidewards
        // there are 2 rectangles only attacks will happen i.e in 2 x 3 and 3 x 2
        // formula is 2 * (k - 2) (k - 1) and each rectangle gives 2 attacks
        //-->so to remove attacks 4 * (k - 2)(k - 1)
        long long ans = (n * n * n * n - 9 * n * n + 24 * n - 16) / 2;
        cout << ans << endl;
    }

    return 0;
}