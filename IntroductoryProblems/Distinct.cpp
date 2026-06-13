#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    set<long long> seen;
    for (int i = 0; i < n; i++)
    {
        long long num;
        cin >> num;
        seen.insert(num);
    }

    cout << seen.size();
}