#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    scanf("%d", &n);

    while (n--) {
        int i, j;
        scanf("%d %d", &i, &j);

        int ans = 0;

        while (i != j) {
            ans++;

            if (i > j) i >>= 1;
            else j >>= 1;
        }

        printf("%d\n", ans);
    }

    return 0;
}
