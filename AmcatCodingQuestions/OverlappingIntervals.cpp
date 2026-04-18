#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, dummy;
    cin >> n >> dummy;

    pair<int, int> arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    // lambda sorting based on start time
    sort(arr, arr + n, [](pair<int, int> a, pair<int, int> b)
         { return a.first < b.first; });

    int overlapping = 0;
    int currStart = arr[0].first;
    int currEnd = arr[0].second;
    for (int i = 1; i < n; i++)
    {
        if (arr[i].first <= currEnd)
        {
            overlapping++;
            if (arr[i].second > currEnd)
            {
                currEnd = arr[i].second; // merging the overlapping into one
            }
        }
        else
        {
            currEnd = arr[i].second;
        }
    }

    cout << overlapping << " ";
    return 0;
}