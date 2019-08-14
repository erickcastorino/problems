#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int a[N];
bool p[N];

int main () {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            scanf("%d", a + i);
        }

        memset(p, false, sizeof p);

        for (int i = 0; i < n-1; i++) {
            if (a[i] != a[i+1]) {
                p[i] = true;
            }
        }
        for (int i = 1; i < n; i++) {
            if (a[i] != a[i-1]) {
                p[i] = true;
            }
        }

        printf("%d\n", accumulate(p, p + n, 0));
    }

    return 0;
}