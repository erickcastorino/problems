#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll a;
        cin >> a;

        ll in = 0;
        ll out = 0;
        int d = 0, d1, d2;

        ll maxprofit = 0;

        while (1) {
            d++;
            in += a;
            out += 1ll << (d - 1);

            ll profit = in - out;
            if (profit > maxprofit) {
                maxprofit = profit;
                d2 = d;
            }

            if (in > out) {
                d1 = d;
            }
            else break;
        }

        cout << d1 << ' ' << d2 << endl;
    }
    return 0;
}