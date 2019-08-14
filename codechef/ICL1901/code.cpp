#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    
    while (t--) {
        int k, n;
        cin >> k >> n;

        unordered_set<int> seen;
        while (k > 0) {
            seen.insert(k % 10);
            k /= 10;
        }

        cout << pow(seen.size(), 3) << endl;
    }

    return 0;
}