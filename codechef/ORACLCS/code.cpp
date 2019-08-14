#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int ans = 1e9;

        while (n--) {
            string s;
            cin >> s;

            int a = 0, b = 0;
            for (char c : s) {
                if (c == 'a') a++;
                else b++;
            }

            ans = min( ans, min(a, b));
        }
        
        cout << ans << endl;
    }

    return 0;
}