#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
char s[N];
bool a[26];

int main () {
    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%s", s);
        
        char c;
        memset(a, false, sizeof a);
        
        for (int i = 0; c = s[i]; i++) {
            a[c-'a'] = true;
        }

        printf("%d\n", accumulate(a, a+26, 0));
    }

    return 0;
}