#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        int t1, t2, t3, t4;
        cin >> t1 >> t2 >> t3 >> t4;

        cout << showpoint << setprecision(6) << t1 / (double) (t1 + t2) << endl; 
    }
    return 0;
}