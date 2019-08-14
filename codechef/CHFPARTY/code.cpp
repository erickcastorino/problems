#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int a[N];

int test () {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n);

    for (int i = 0; i < n; i++) {
        if (a[i] > i) {
            return i;
        }
    }
    return n;
}

int main () {
    int t;
    cin >> t;

    while (t--) {
        int res = test();
        cout << res << endl;
    }

    return 0;
}