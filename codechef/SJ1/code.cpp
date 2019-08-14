#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> g[N];

typedef long long ll;
ll x[N], m[N];

vector<pair<int, ll>> s;

void dfs (int u, int from, ll gcd) {
    bool leaf = true;
    gcd = __gcd(gcd, x[u]);

    for (int v : g[u]) {
        if (v == from) continue;

        leaf = false;
        dfs(v, u, gcd);
    }

    if (leaf) {
        s.push_back({ u, m[u] - __gcd(gcd, m[u]) });
    }
}

void test () {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        g[i].clear();
    }

    for (int i = 1; i < n; i++) {
        int u, v;
        scanf("%d %d", &u, &v);

        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i = 1; i <= n; i++) scanf("%lld", x + i);
    for (int i = 1; i <= n; i++) scanf("%lld", m + i);

    s.clear();
    dfs(1, -1, 0);

    sort(s.begin(), s.end());

    for (auto &p: s) {
        printf("%lld ", p.second);
    }
    puts("");
}

int main () {
    int t;
    scanf("%d", &t);
    while (t--) test();
    return 0;
}