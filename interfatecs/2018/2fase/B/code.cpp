#include <bits/stdc++.h>
using namespace std;

const int N = 505;
int a[N][N], n, mini, maxi;
bool leaf = false;

void run (int i, int j, int sum) {
  int l = n - i;
  if (i == n || j == l) return;

  sum += a[i][j];

  if (j == l - 1) {
    if (leaf) {
      mini = min(mini, sum);
      maxi = max(maxi, sum);
    } else {
      leaf = true;
      mini = maxi = sum;
    }
  }

  run(i+1, j, sum);
  run(i, j+1, sum);
}

int main () {
  cin >> n;

  for (int i = 0, l = n; i < n; i++, l--) {
    for (int j = 0; j < l; j++) {
      cin >> a[i][j];
    }
  }

  run(0, 0, 0);

  cout << "maximo: " << maxi << endl;
  cout << "minimo: " << mini << endl;

  return 0;
}