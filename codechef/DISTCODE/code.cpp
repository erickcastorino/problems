#include <bits/stdc++.h>
using namespace std;

int readInt() {
    int res = 0;
    while (1) {
        char c = getchar();
        if (c >= '0' && c <= '9') {
            res = (res << 3) + (res << 1) + (c & 15);
            continue;
        }
        return res;
    }
}

const int Z = 26;
bool a[Z][Z];

void test() {
    memset(a, false, sizeof a);
    char last = getchar();

    while (1) {
        char c = getchar();
        if (c >= 'A' && c <= 'Z') {
            a[last - 'A'][c - 'A'] = true;
            last = c;
        } else break;
    }

    int ans = 0;
    for (int i = 0; i < Z; i++) {
        for (int j = 0; j < Z; j++) {
            ans += a[i][j];
        }
    }
    printf("%d\n", ans);
}

int main () {
    int t = readInt();
    while (t--) test();
    return 0;
}