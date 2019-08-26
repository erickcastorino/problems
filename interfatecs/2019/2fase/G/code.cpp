#include <bits/stdc++.h>
using namespace std;

const int N = 1550;
typedef long long ll;

struct ponto {
	int prev;
	ll mini;
};

ponto pontos[N];
typedef pair<int, ll> pii;
vector<pii> g[N];

vector<int> fila;
int cur = 0;

int main () {
	for (int i = 0; i < N; i++) {
		pontos[i].prev = -1;
		pontos[i].mini = -1;
	}
	
	int e;
	cin >> e; // pontos
	
	int q;
	cin >> q; // pontes
	
	int f;
	cin >> f; // target
	
	for (int i = 0; i < q; i++) {
		int a, b;
		ll d;
		cin >> a >> b >> d;
		
		g[a].push_back({ b, d });
		g[b].push_back({ a, d });
	}
	
	pontos[0].mini = 0;
	pontos[0].prev = -2;
	fila.push_back(0);
	
	while (fila.size() > cur) {
		int u = fila[cur];
		ll cost = pontos[u].mini;
		
		for (pii p : g[u]) {
			int v = p.first;
			ll d = p.second;
			
			ll thiscost = cost + d;
			
			if (pontos[v].prev == -1 || (pontos[v].mini > thiscost)) {
				pontos[v].mini = thiscost;
				pontos[v].prev = u;
				fila.push_back(v);
			}
		}
		
		cur++;
	}
	
	vector<int> ans;
	while (f >= 0) {
		ans.push_back(f);
		f = pontos[f].prev;
	}
	
	for (int i = ans.size() - 1; i > 0; i--) {
		printf("%d ", ans[i]);
	}
	printf("%d\n", ans[0]);
	
	return 0;
}



