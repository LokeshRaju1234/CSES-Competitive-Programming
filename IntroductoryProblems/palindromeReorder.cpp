#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    map<char, int> freq;

    for (auto c : s)
    {
        freq[c]++;
    }
    char center;
    int odd = 0; // in a palindrome there should be no more than 1 odd
    // bcz the odd character will come in the middle
    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        // if it has odd count then it will be in center
        if (freq[ch] % 2 == 1)
        {
            center = ch;
            odd++;
        }
    }

    if (odd > 1)
    {
        cout << "NO SOLUTION\n";
    }
    else
    {
        for (char ch = 'A'; ch <= 'Z'; ch++)
        {
            // creates a character with half of the frequency
            // first it will half char at starting and at end so it will become palindrome
            cout << string(freq[ch] / 2, ch);
        }

        if (odd)
        {
            cout << center; // printing the center character which has
            // odd count i.e only 1 freq
        }

        for (char ch = 'Z'; ch >= 'A'; ch--)
        {
            cout << string(freq[ch] / 2, ch);
        }
        cout << "\n";
    }

    return 0;
}