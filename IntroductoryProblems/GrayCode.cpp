#include <bits/stdc++.h>
using namespace std;

vector<string> create(int n)
{
    if (n == 1)
    {
        return {"0", "1"};
    }

    vector<string> code;
    auto prev = create(n - 1);
    for (auto s : prev)
    {
        code.push_back("0" + s); // add 0 first to the prev result
    }

    // reverse the bits and add 1 gives you the difference 1
    reverse(prev.begin(), prev.end());
    for (auto s : prev)
    {
        code.push_back("1" + s);
    }

    return code;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    auto code = create(n);
    for (auto c : code)
    {
        cout << c << "\n";
    }
    return 0;
}