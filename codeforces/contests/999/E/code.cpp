#include <bits/stdc++.h>
using namespace std;

const int N = 5e3 + 5;
vector<int> g[N], tg[N];
bool was[N];
int ord[N], iord, id[N], iid, dtcg[N];

void dfs2 (int u) {
    was[u] = true;

    for (int v : tg[u]) {
        if (!was[v]) {
            dfs2(v);
        }
    }

    id[u] = iid;
}

void dfs1 (int u) {
    was[u] = true;

    for (int v : g[u]) {
        if (!was[v]) {
            dfs1(v);
        }
    }

    ord[iord++] = u;
}

int main () {
    int n, m, s;
    scanf("%d %d %d", &n, &m, &s);

    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);

        g[u].push_back(v);
        tg[v].push_back(u);
    }

    for (int u = 1; u <= n; u++) {
        if (!was[u]) {
            dfs1(u);
        }
    }

    memset(was, false, sizeof was);

    for (int i = iord - 1; i >= 0; i--) {
        int u = ord[i];

        if (!was[u]) {
            dfs2(u);
            iid++;
        }
    }

    dtcg[id[s]]++;

    for (int u = 1; u <= n; u++) {
        for (int v : g[u]) {
            if (id[u] != id[v]) {
                dtcg[id[v]]++;
            }
        }
    }

    int ans = 0;

    for (int i = 0; i < iid; i++) {
        if (dtcg[i] == 0) {
            ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}