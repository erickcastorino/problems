#include <bits/stdc++.h>
using namespace std;

const int N = 2019;

char a[N][N];

int acc[N][N];

int main () {
  int n, k;
  scanf("%d %d", &n, &k);

  for (int i = 0; i < n; i++) {
    scanf("%s", a[i]);
  }

  int alreadyWhite = 0;

  for (int i = 0; i < n; i++) {
    int l = 0;
    while (l < n && a[i][l] == 'W') l++;
    if (l == n) {
      alreadyWhite++;
      continue;
    }

    int r = n - 1;
    while (r >= 0 && a[i][r] == 'W') r--;
    if (r - l + 1 > k) continue;

    int rs = max(0, i - k + 1), re = i + 1;
    int cs = max(0, r - k + 1), ce = l + 1;
    acc[rs][cs]++;
    acc[rs][ce]--;
    acc[re][cs]--;
    acc[re][ce]++;
  }

  for (int j = 0; j < n; j++) {
    int t = 0;
    while (t < n && a[t][j] == 'W') t++;
    if (t == n) {
      alreadyWhite++;
      continue;
    }

    int b = n - 1;
    while (b >= 0 && a[b][j] == 'W') b--;
    if (b - t + 1 > k) continue;

    int rs = max(0, b - k + 1), re = t + 1;
    int cs = max(0, j - k + 1), ce = j + 1;
    acc[rs][cs]++;
    acc[rs][ce]--;
    acc[re][cs]--;
    acc[re][ce]++;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      acc[i][j] += i ? acc[i-1][j] : 0;
    }
  }

  int maxi = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      acc[i][j] += j ? acc[i][j-1] : 0;
      maxi = max(maxi, acc[i][j]);
    }
  }

  printf("%d\n", maxi + alreadyWhite);
  return 0;
}