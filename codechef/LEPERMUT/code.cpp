#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int x, y;
        cin >> x;

        bool good = true;
        int _max = x;

        for (int i = 1; i < n; i++) {
            cin >> y;
            if (_max != x && _max > y) {
                good = false;
            }
            _max = max({ _max, x });
            x = y;
        }

        puts(good ? "YES" : "NO");
    }

    return 0;
}