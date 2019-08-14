#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
bool a[N];

int main () {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        memset(a, false, sizeof a);
        for (int i = 0, x; i < n; i++) {
            scanf("%d", &x);
            a[x] = true;
        }

        printf("%d\n", accumulate(a, a + N, 0));
    }
    
    return 0;
}