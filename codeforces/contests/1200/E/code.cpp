#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
char a[N], b[N];

void join() {
  int la = strlen(a);
  int lb = strlen(b);

  int found = -1;

  for (int i = lb; found == -1 && i; i--) {
    found = max(0, la - i);

    for (int j = found; j < la; j++) {
      if (a[j] != b[j - found]) {
        found = -1;
        break;
      }
    }
  }

  if (found == -1) {
    for (int i = la, j = 0; j <= lb; i++, j++) {
      a[i] = b[j];
    }
  } else {
    for (int i = la, j = lb - found; j <= lb; i++, j++) {
      a[i] = b[j];
    }
  }
}

int main () {
  int n;
  cin >> n;

  cin >> a;
  for (int i = 1; i < n; i++) {
    cin >> b;
    join();
  }

  cout << a << endl;
  return 0;
}