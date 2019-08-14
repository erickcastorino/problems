#include <bits/stdc++.h>
using namespace std;

string m;

void test() {
    string s;
    cin >> s;

    for (char c : s) {
        if (c == '_') {
            putchar(' ');
        }
        else if (c >= 'A' && c <= 'Z') {
            putchar((m[c - 'A'] - 'a') + 'A');
        }
        else if (c >= 'a' && c <= 'z') {
            putchar(m[c - 'a']);
        }
        else putchar(c);
    }
    puts("");
}

int main () {
    int t;
    cin >> t >> m;

    while (t--) test();
    return 0;
}