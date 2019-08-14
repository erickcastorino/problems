#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int a[N], b[N];

int main () {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        n <<= 1;

        for (int i = 0; i < n; i++) {
            scanf("%d", a + i);
        }

        sort(a, a + n);
        for (int i = 0, j = 0; j < n; i++, j += 2) {
            b[j] = a[i];
        }
        for (int i = n-1, j = 1; j < n; i--, j += 2) {
            b[j] = a[i];
        }

        printf("%d\n", max(b[n/2], b[n/2-1]));

        for (int i = 0; i < n; i++) {
            printf("%d%c", b[i], i == n-1 ? '\n' : ' ');
        }
    }

    return 0;
}