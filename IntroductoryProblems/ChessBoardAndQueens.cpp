#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> mat(8, vector<char>(8));
int ways = 0;
bool colused[8];
bool isdig1[15];
bool isdig2[15];

void solve(int row)
{
    if (row == 8)
    {
        ways++;
        return;
    }

    for (int col = 0; col < 8; col++)
    {
        if (mat[row][col] == '*')
            continue; // already preserved

        // row - col + 7 for left - down and left - up diagonal 0 - 7 = -7 can be negativeand 7 - 0 = 7
        // so range is -7 to 7 and +7 bcz index should not be negative
        // row + col for right down and right - up diagonal
        // so 0 + 0 = 0 and upto 7 + 7  = 14 and ranges from 0 to 14 thats why the size is 15
        if (mat[row][col] == '.' && !colused[col] && !isdig1[row - col + 7] && !isdig2[row + col])
        {
            colused[col] = true;
            isdig1[row - col + 7] = true;
            isdig2[row + col] = true;

            solve(row + 1); // solve for each row

            colused[col] = false;
            isdig1[row - col + 7] = false;
            isdig2[row + col] = false; // do backtrack
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> mat[i][j];
        }
    }

    solve(0);
    cout << ways;
    return 0;
}