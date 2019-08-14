#include <bits/stdc++.h>
using namespace std;

void test () {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%d ", i*2+1);
    }
    putchar('\n');
}

int main () {
    int t;
    scanf("%d", &t);
    while (t--) test();
    return 0;
}