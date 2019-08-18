#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int a[2*N];

int main () {
  int n;
  cin >> n;

  if (n % 2 == 0) {
    puts("NO");
    return 0;
  }

  int cur = 1;
  int j = 0;

  for (int i = 0; i < 2*n; i++) {
    if (a[j]) {
      puts("NO");
      return 0;
    }
    a[j] = cur;
    
    if (i % 2 == 1) {
      j = (j - 1) % (2*n);
    } else {
      j = (j + n) % (2*n);
    }
    cur++;
  }

  printf("YES\n%d", a[0]);

  for (int i = 1; i < 2*n; i++) {
    printf(" %d", a[i]);
  }

  cout << endl;
  return 0;
}
