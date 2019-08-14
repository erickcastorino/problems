#include <bits/stdc++.h>
using namespace std;

int n;
typedef pair<int, int> pii;

pii count (int x) {
    pii res = { 0, 0 };
    
    for (int i = 0; i < n; i++) {
        if (x & (1 << i)) {
            res.first++;
        } else {
            res.second++;
        }
    }

    return res;
}

void test () {
    cin >> n;
    
    int a, b;
    cin >> a >> b;

    pii pa = count(a);
    pii pb = count(b);

    int ones = min(pa.first, pb.second) + min(pb.first, pa.second);

    int zeroes = n - ones;
    int answer = 0;

    for (int i = zeroes; i < n; i++) {
        answer |= 1 << i;
    }

    cout << answer << endl;
}

int main () {
    int t;
    cin >> t;

    while (t--) test();
    return 0;
}