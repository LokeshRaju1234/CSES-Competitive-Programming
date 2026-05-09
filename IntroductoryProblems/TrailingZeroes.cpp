#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    long long count = 0;
    while (n > 0)
    {
        // each (2,5) will give you a trailing 0 at the end
        // like for 10 we will get 2 pairs of (2,5) then 2 trailing zeroes
        //The number of trailing zeros in a number equals the number of times we can divide it by 10. 
        //Since 10=2 \cdot 5, we should focus on factors 2 and 5.
        n /= 5;
        count += n;
    }
    cout << count;
    return 0;
}