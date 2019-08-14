#include <bits/stdc++.h>
using namespace std;

typedef struct {
    double x, y, dist;
    int i;
} point;

bool operator < (point a, point b) {
    if (a.dist == b.dist) {
        return (a.i - b.i) < 0;
    }
    return (a.dist - b.dist) < 0;
}

const int M = 26;
point a[M];

void test() {
    double xa, ya, raio;
    cin >> xa >> ya >> raio;

    int m;
    cin >> m;

    int count = 0;

    for (int i = 0; i < m; i++) {
        cin >> a[i].x >> a[i].y;
        a[i].i = i + 1;
        
        a[i].dist = sqrt(
            pow(a[i].x - xa, 2) + 
            pow(a[i].y - ya, 2)
        );

        if (a[i].dist <= raio) {
            count++;
        }
    }

    if (count) {
        sort(a, a + m);

        for (int i = 1; i <= count; i++) {
            char c = 'A' + a[i-1].i;
            char divisor = i == count ? '\n' : ' ';

            cout << c << divisor;
        }

    } else {
        cout << "OUT OF RANGE" << endl;
    }
}

int main () {
    int t;
    cin >> t;
    while (t--) test();
    return 0;
}