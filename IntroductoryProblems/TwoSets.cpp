#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    // formula for finding the sum of 1 to n
    long long s = (long long)n * (n + 1) / 2;
    if (s % 2 == 1)
    {
        cout << "NO";
        return 0;
    }
    s /= 2; // dividing the sum bcz if we get half sum in one array then automatically
    // we can get the other sum
    vector<int> set1, set2;
    for (int i = n; i >= 1; i--)
    {
        // if the number is bigger than the sum then we will include this in sum
        // like a = a - number;
        if (s >= i)
        {
            s = s - i;
            set1.push_back(i);
        }
        else
        {
            // else if the number is less than K then we can create a sum using a = a'
            //
            set2.push_back(i);
        }
    }

    cout << "YES\n";
    cout << set1.size() << "\n";
    for (auto x : set1)
        cout << x << " ";
    cout << "\n";
    cout << set2.size() << "\n";
    for (auto x : set2)
        cout << x << " ";
    cout << "\n";
    return 0;
}