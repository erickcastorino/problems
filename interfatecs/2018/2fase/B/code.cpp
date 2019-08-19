#include <bits/stdc++.h>
using namespace std;

const int N = 505;
int n;

typedef struct {
  int mini, maxi, x;
  void leaf () {
    mini = maxi = x;
  }
  void updateMin (int a, int b) {
    mini = min(x + a, x + b);
  }
  void updateMax (int a, int b) {
    maxi = max(x + a, x + b);
  }
} cell;

cell a[N][N];

int main () {
  cin >> n;

  for (int i = 0, l = n; i < n; i++, l--) {
    for (int j = 0; j < l; j++) {
      cin >> a[i][j].x;
    }
  }

  for (int i = 0; i < n; i++) {
    a[i][n - i - 1].leaf();
  }

  for (int j = 1; j < n; j++) {
    for (int i = 0; i < n - j; i++) {
      int k = n - j - i - 1;
      a[i][k].updateMax(a[i+1][k].maxi, a[i][k+1].maxi);
      a[i][k].updateMin(a[i+1][k].mini, a[i][k+1].mini);
    }
  }

  cout << "maximo: " << a[0][0].maxi << endl;
  cout << "minimo: " << a[0][0].mini << endl;

  return 0;
}
