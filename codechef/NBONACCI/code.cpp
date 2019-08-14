#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int a[N];

int main () {
    int n, q;
    scanf("%d %d", &n, &q);

    a[0] = 0;
    for (int i = 1; i <= n; i++) {
        scanf("%d", a+i);
        a[i] ^= a[i-1];
    }

    // F = 0, 1, 2,    3,     (123), 1, 2,    3,     (123) 
    // S = 0, 1, (12), (123), 0,     1, (12), (123), 0

    int k;
    while (q--) {
        scanf("%d", &k);
        printf("%d\n", a[k % (n + 1)]);
    }

    return 0;
}