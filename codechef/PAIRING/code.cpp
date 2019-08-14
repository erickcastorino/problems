#include <bits/stdc++.h>
using namespace std;

const int N = 1e3;
bool matched[N];

typedef struct {
    int first, second;
    bool picked;
} pairEmployee;

const int M = 1e4;
pairEmployee p[M];

void test () {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++) {
        scanf("%d %d", &p[i].first, &p[i].second);
        p[i].picked = false;
    }

    memset(matched, false, sizeof matched);
    for (int i = m-1; i >= 0; i--) {
        if (!matched[p[i].first] && !matched[p[i].second]) {
            matched[p[i].first] = true;
            matched[p[i].second] = true;
            p[i].picked = true;
        }
    }

    for (int i = 0; i < m; i++) {
        if (p[i].picked) {
            printf("%d ", i);
        }
    }
    putchar('\n');
}

int main () {
    int t;
    scanf("%d", &t);
    while (t--) test();
    return 0;
}