#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int a[N];

int test () {
    int n, k;
    cin >> n >> k;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    int res = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] + k > sum - a[i]) {
            res++;
        }
    }

    return res;
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