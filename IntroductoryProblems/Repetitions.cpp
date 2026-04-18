#include <bits/stdc++.h>
using namespace std;

int solve(string s)
{
    int max = 1;
    int count = 1;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
        {
            count++; // we got the same character
        }
        else
        {
            count = 1; // reset the count when there is different character
        }

        if (count > max)
        {
            max = count; // we found the maxLength with the same character
        }
    }

    return max;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;

    int maxLength = solve(s);
    cout << maxLength << " ";
    return 0;
}