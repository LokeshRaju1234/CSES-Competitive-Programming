#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;
        // take max becasue the number eill present only in max co-ordinate
        // like 2,3 -->max is 3 and num is present in the 3 x 3
        long long n = max(x, y);
        long long ans;

        // we need to consider two cases
        // one is if number is even and other is if number is odd
        if (n % 2 == 0)
        {
            if (n == y)
            {
                // if n == column
                // taking the previous square and adding the row will give you the value
                ans = (n - 1) * (n - 1) + x;
            }
            else
            {
                // if n == row
                ans = n * n - y + 1;
            }
        }
        else
        {
            if (y == n)
            {
                ans = n * n - x + 1;
            }
            else
            {

                ans = (n - 1) * (n - 1) + y;
            }
        }

        cout << ans << endl;
    }
    return 0;
}