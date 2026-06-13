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
    sort(wei.begin(), wei.end());
    int gandola = 0;

    int i = 0, j = n - 1;

    while (i <= j)
    {
        if (i == j || wei[i] + wei[j] <= x)
        {
            gandola++;
            i++;
            j--; // both children gets one gandola
        }
        else
        {
            j--;
            gandola++; // heavies weight childrens will gets one gandola
        }
    }

    cout << gandola << "\n";
}