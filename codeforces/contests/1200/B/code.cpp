#include <bits/stdc++.h>
using namespace std;

bool possible () {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int mini = max(0, a[i + 1] - k);
        if (a[i] > mini) {
            m += a[i] - mini;
        } else {
            int diff = mini - a[i];
            if (diff > m) return false;
            m -= diff;
        }
    }

    return true;
}

int main () {
    int t;
    cin >> t;

    while (t--) {
        if (possible()) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
