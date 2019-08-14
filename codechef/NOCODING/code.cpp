#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int len = 0;
        int count = 1;
        int cur = s[0];

        for (char c : s) {
            for (; cur != c; count++) {
                cur = cur == 'z' ? 'a' : (cur + 1);
            }
            len++;
            count++;
        }

        puts(count <= (11 * len) ? "YES" : "NO");
    }

    return 0;
}