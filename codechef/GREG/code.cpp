#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
bool np[2*N];

int main () {
    int n, m;
    cin >> n >> m;

    int ans = 1;
    for (int i = 3, l = m + n; i <= l; i += 2) {
        if (np[i]) continue;
        ans++;

        for (int j = i + i; j <= l; j += i) {
            np[j] = true;
        }
    }

    cout << ans << endl;
}