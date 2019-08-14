#include <bits/stdc++.h>
using namespace std;

void test () {
    int n;
    cin >> n;

    cout << n << endl;
    for (int i = 1; i <= n; i++) {
        cout << n << endl;

        for (int j = 1; j <= n; j++) {
            int a = (j + i) % n;
            int b = (a + 1) % n;

            cout << j << ' ' << a+1 << ' ' << b+1 << endl;
        }
    }
}

int main () {
    int t;
    cin >> t;
    while (t--) test();
    return 0;
}
