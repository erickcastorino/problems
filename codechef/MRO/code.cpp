#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
const int MOD = 1e9 + 7;
int a[N];

typedef long long ll;

void preprocess () {
    a[1] = 1;
    for (int i = 2, p = 2; i < N; i++) {
        a[i] = ((ll)a[i-1] * (ll)(p - 1 + MOD)) % MOD;
        p = ((ll)p * 2ll) % MOD;
    }
}

int main () {
    preprocess();

    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", a[n]);
    }
    
    return 0;
}