#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int freq[26] = {0};
    int n = s.length();

    for (int i = 0; i < n; i++) {
        freq[s[i] - 'A']++;
    }

    // Check impossible case
    int mx = 0;

    for (int i = 0; i < 26; i++) {
        if (freq[i] > mx) {
            mx = freq[i];
        }
    }

    if (mx > (n + 1) / 2) {
        cout << -1;
        return 0;
    }

    string ans = "";

    for (int pos = 0; pos < n; pos++) {

        for (int ch = 0; ch < 26; ch++) {

            // character not available
            if (freq[ch] == 0) {
                continue;
            }

            // same as previous character
            if (!ans.empty() && ans.back() == char(ch + 'A')) {
                continue;
            }

            // try taking this character
            freq[ch]--;

            int maxFreq = 0;

            for (int k = 0; k < 26; k++) {
                if (freq[k] > maxFreq) {
                    maxFreq = freq[k];
                }
            }

            int remaining = n - pos - 1;

            // check if future arrangement possible
            if (maxFreq <= (remaining + 1) / 2) {
                ans += char(ch + 'A');
                break;
            }

            // undo
            freq[ch]++;
        }
    }

    cout << ans;

    return 0;
}