#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long mod = 1e9 + 7;
    long long ans = 1;

    for (int i = 0; i < n; i++)
    {
        ans = (ans * 2) % mod;
    }

    cout << ans;
    return 0;
}