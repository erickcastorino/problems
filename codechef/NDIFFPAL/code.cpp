#include <bits/stdc++.h>
using namespace std;

void test () {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        putchar('a' + i % 3);
    }
    puts("");
}

int main () {
    int t;
    cin >> t;

    while (t--) test();

    return 0;
}