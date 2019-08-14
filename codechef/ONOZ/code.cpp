#include <bits/stdc++.h>
using namespace std;

const int D = 10;
int digits[D];

void setdigits (int x) {
    while (x >= D) {
        digits[x % D]++;
        x /= D;
    }
    digits[x]++;
}

int sumOdds () {
    int res = 0;
    for (int i = 0; i < D; i++) {
        res += digits[i] > 0;
    }
    return res;
}

int test () {
    int h, m;
    cin >> h >> m;

    int count = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < m; j++) {
            memset(digits, 0, sizeof(digits));
            setdigits(i);
            setdigits(j);
            count += sumOdds() == 1;
        }
    }

    return count;
}

int main () {
    int t;
    cin >> t;
    
    while (t--) {
        int ans = test();
        cout << ans << endl;
    }
    
    return 0;
}