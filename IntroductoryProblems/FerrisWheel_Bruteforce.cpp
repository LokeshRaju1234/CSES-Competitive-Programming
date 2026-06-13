#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<long> wei(n);
    for (int i = 0; i < n; i++)
    {
        cin >> wei[i];
    }
    int gandola = 0;
    vector<bool> used(n, false);
    for (int i = 0; i < n; i++)
    {

        if (used[i])
            continue;
        int next = -1;
        for (int j = i + 1; j < n; j++)
        {
            if (!used[j] && wei[i] + wei[j] <= x)
            {
                next = j;
                break;
            }
        }

        used[i] = true;
        if (next != -1)
        {
            used[next] = true; // for two pwoplw gandola is allocated
        }

        gandola++;
    }

    cout << gandola;
}