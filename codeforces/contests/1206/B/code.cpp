#include <bits/stdc++.h>
using namespace std;

int main () {
  int n;
  cin >> n;

  int posi = 0, nega = 0, zero = 0;
  long long tot = 0;

  int x;
  for (int i = 0 ; i < n; i++) {
    cin >> x;

    if (x > 0) {
      posi++;
      tot += x - 1;
    }
    else if (x < 0) {
      nega++;
      tot += (-x) - 1;
    }
    else zero++;
  }

  if (nega & 1) {
    if (zero == 0) {
      tot += 2;
    }
  }

  tot += zero;
  cout << tot << endl;
  return 0;
}