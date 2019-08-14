#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int a[N];

void test () {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i-1] > 1) {
            puts("NO");
            return;
        }
    }
    puts("YES");
}

int main () {
    int t;
    cin >> t;
    while (t--) test();
    return 0;
}