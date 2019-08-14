#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int sum = 0;

        for (char c : s) {
            if (c > '0' && c <= '9') {
                sum += c - '0';
            }
        }

        cout << sum << endl;
    }

    return 0;
}
