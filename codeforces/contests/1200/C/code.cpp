#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main () {
    ll n, m;
    int q;

    cin >> n >> m >> q;
    ll g = __gcd(n, m);
    n /= g;
    m /= g;
    
    while (q--) {
        ll sx, sy, ex, ey;
        cin >> sx >> sy >> ex >> ey;

        ll sg = (sy - 1) / (sx == 1 ? n : m);
        ll eg = (ey - 1) / (ex == 1 ? n : m);

        if (sg == eg) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}