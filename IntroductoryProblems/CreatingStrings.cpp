#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<string> ans;
    // the C++ function next_permutation to generate all distinct permutations
    // of a string in lexicographic order.
    do
    {
        ans.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    cout << ans.size() << endl;
    for (auto s : ans)
    {
        cout << s << endl;
    }
    return 0;
}