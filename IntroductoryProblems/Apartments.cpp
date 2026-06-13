#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<long long> per(n);
    for (int i = 0; i < n; i++)
    {
        cin >> per[i];
    }

    sort(per.begin(), per.end());

    vector<long long> apart(m);
    for (int i = 0; i < m; i++)
    {
        cin >> apart[i];
    }

    sort(apart.begin(), apart.end());

    int count = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        while (j < m && apart[j] < per[i] - k)
        {
            // we move pointer because if the smaller apartment size is not in the
            // desired range then it will definately will not be in the range of future ones
            j++;
        }

        if (j < m && apart[j] <= per[i] + k)
        {
            // then this applicant will accept this apartment
            count++;
            j++;
        }
    }

    cout << count;
}