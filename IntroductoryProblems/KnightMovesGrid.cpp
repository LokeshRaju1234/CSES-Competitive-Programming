#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    queue<pair<int, int>> q;
    // to track the minimum moves to reach top left (0,0)
    vector<vector<int>> dist(n, vector<int>(n, -1));
    dist[0][0] = 0; // from starting the moves will be 0

    q.push({0, 0});

    // knight moves in 8 directions
    // 2 up + 1 left,2 up + 1 right,2 down + 1 left,2 up + 1 right,
    // 1 down + 2 left,1 up + 2 right,1 down + 2 right,1 up + 2 left
    int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
    int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
    while (!q.empty())
    {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            // try all 8 directions
            int dr = r + dx[i];
            int dc = c + dy[i];
            // check the out of bounds and check it is reaches any cell
            if (dr >= 0 && dc >= 0 && dr < n && dc < n &&
                dist[dr][dc] == -1)
            {
                // if it reaches then add + 1 to the curr distance
                // because we have already covered the prev one by taking that
                // we will reach thte top left corner
                dist[dr][dc] = dist[r][c] + 1;
                q.push({dr, dc});
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << dist[i][j] << " ";
        }
    }

    return 0;
}