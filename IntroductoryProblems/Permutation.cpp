#include <bits/stdc++.h>
using namespace std;
// to make an array beautiful with difference >= 2
// we will get difference 2 only subtracting even with even numbers and
// odd numebers -->4 - 2 = 2 and 5 - 3 = 2

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    vector<int> even;
    vector<int> odd;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            even.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
    }

    vector<int> res;
    for (auto x : even)
    {
        res.push_back(x);
    }
    for (auto x : odd)
    {
        res.push_back(x);
    }

    for (auto x : res)
    {
        cout << x << " ";
    }
    return 0;
}