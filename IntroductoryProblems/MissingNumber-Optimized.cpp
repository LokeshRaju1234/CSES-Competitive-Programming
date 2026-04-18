#include <iostream>
using namespace std;
// The idea is to first calculate the sum 1+2+...+n
// and then subtract from the sum all numbers given in the input. The resulting value is the only missing number.
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    for (int i = 1; i <= n - 1; i++)
    {
        int x;
        cin >> x;
        sum -= x;
    }
    cout << sum << "\n";
}