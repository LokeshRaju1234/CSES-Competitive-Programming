#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    // try every subset using bitmask
    // for every number we have two options include or dont include
    // so we will have 2 to the power of n combinations
    // we will loop from 0 to 2 to the power of n combinations
    long long diff = 1e9;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        long long sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            // cheking if the bit is ON then include the element in subset
            if (mask & (1 << i))
            {
                sum1 += s[i];
            }
            else
            {
                sum2 += s[i];
            }
        }

        diff = min(diff, abs(sum1 - sum2));
    }
    cout << diff;
    return 0;
}