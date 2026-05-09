#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<string> grid(n);

    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }

    // For each square, we choose the first character that is not the original character of the square
    // and is also not the same as the character to the left or the character above.
    // Since there are four possible characters, we can always find a valid character.

    // we need to check if the curr char is same as old char
    // and we need to check if the char is not same as left and above
    // this ensures the char will not be same for adjacent cells

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // check all 4 characters with 3 conditions mentioned above
            // if it fits then change the character
            for (int c = 'A'; c <= 'D'; c++)
            {
                bool fail = true;
                if (c == grid[i][j])
                {
                    fail = false;
                }
                // check top
                if (i > 0 && grid[i - 1][j] == c)
                {
                    fail = false;
                }
                if (j > 0 && grid[i][j - 1] == c) // check left
                {
                    fail = false;
                }

                if (fail) // if it is true we can fit a character
                {
                    grid[i][j] = c;
                    break;
                }
            }
            cout << grid[i][j];
        }
        cout << "\n";
    }

    return 0;
}