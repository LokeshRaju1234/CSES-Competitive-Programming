#include <bits/stdc++.h>
using namespace std;
bool visited[7][7];
string path;
int ans = 0;
// for all four directions
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
// these are the four directions we have in path to try
char dir[4] = {'U', 'D', 'L', 'R'};

bool isvalid(int r, int c)
{
    // check out of bounds and check if the cell is visited or not
    return (r >= 0 && r < 7 && c >= 0 && c < 7 && !visited[r][c]);
}
void dfs(int r, int c, int idx)
{
    // if it reaches the end so this is valid path and it should visit all
    // cells exactly once so we will check idx == 48
    if (r == 6 && c == 0)
    {
        if (idx == 48)
        {
            ans++; // count the path
        }

        return;
    }

    // there will be a case ..used all paths but not reached end
    if (idx == 48)
    {
        return;
    }

    visited[r][c] = true;
    // left and right open, up and down blocked
    if ((r == 0 || visited[r - 1][c]) &&
        (r == 6 || visited[r + 1][c]) &&
        c > 0 && !visited[r][c - 1] &&
        c < 6 && !visited[r][c + 1])
    {
        visited[r][c] = false;
        return;
    }

    // up and down open, left and right blocked
    if ((c == 0 || visited[r][c - 1]) &&
        (c == 6 || visited[r][c + 1]) &&
        r > 0 && !visited[r - 1][c] &&
        r < 6 && !visited[r + 1][c])
    {
        visited[r][c] = false;
        return;
    }

    if (path[idx] != '?')
    {
        // try all four directions
        for (int k = 0; k < 4; k++)
        {
            // we need to check the direction there and we need to move the mentioned direction
            if (dir[k] == path[idx])
            {
                int nr = r + dx[k];
                int nc = c + dy[k];

                if (isvalid(nr, nc))
                {
                    dfs(nr, nc, idx + 1);
                }
            }
        }
    }
    else
    {
        // try all four directions
        for (int k = 0; k < 4; k++)
        {

            int nr = r + dx[k];
            int nc = c + dy[k];

            if (isvalid(nr, nc))
            {
                dfs(nr, nc, idx + 1);
            }
        }
    }

    visited[r][c] = false; // backtrack
}

int solve(string s)
{
    path = s;
    dfs(0, 0, 0); // row col and we need to track the index if it reaches 48
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    cout << solve(s);
}