#include <bits/stdc++.h>
using namespace std;

const int N = 2019;
const int WHITE = 2 * N;
char a[N][N];

typedef pair<int, int> pii;
pii row[N], col[N];

int sumRow[N][N], sumCol[N][N];

int main () {
    int n, k;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%s", a[i]);
        printf("%s\n", a[i]);

        row[i] = { WHITE, WHITE };
        col[i] = { WHITE, WHITE };
    }

    printf("k = %d\n", k);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 'B') {
                if (row[i].first == WHITE) {
                    row[i].first = j;
                }
                row[i].second = j;

                if (col[j].first == WHITE) {
                    col[j].first = i;
                }
                col[j].second = i;
            }
        }
    }

    int alreadyWhite = 0;

    for (int i = 0; i < n; i++) {
        // printf("row[%d]: { %d, %d }\n", i, row[i].first, row[i].second);
        if (row[i].first == WHITE) {
            alreadyWhite++;
            continue;
        }

        if (row[i].second - (k - 1) <= row[i].first) {
            int s = max(0, row[i].second - (k - 1));
            int e = min(n - 1, row[i].first + 1);

            sumRow[i][s]++;
            sumRow[i][e]--;
        }
    }

    for (int j = 0; j < n; j++) {
        // printf("col[%d]: { %d, %d }\n", j, col[j].first, col[j].second);
        if (col[j].first == WHITE) {
            alreadyWhite++;
            continue;
        }

        if (col[j].second - (k - 1) <= col[j].first) {
            int s = max(0, col[j].second - (k - 1));
            int e = min(n - 1, col[j].first + 1);

            sumCol[s][j]++;
            sumCol[e][j]--;
        }
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            sumRow[i][j] += sumRow[i][j - 1];
            sumCol[i][j] += sumCol[i - 1][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", sumRow[i][j]);
        }
        putchar('\n');
    }

    int maxi = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            maxi = max(maxi, sumRow[i][j] + sumCol[i][j]);
        }
    }

    printf("%d\n", alreadyWhite + maxi);
    return 0;
}
