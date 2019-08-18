#include <bits/stdc++.h>
using namespace std;

int n;

int maxi() {
  int a, b;
  cin >> a;

  for (int i = 1; i < n; i++) {
    cin >> b;
    a = max(a, b);
  }

  return a;
}

int main () {
  for (int i = 0; i < 2; i++) {
    cin >> n;
    cout << maxi();
    
    if (i) cout << endl;
    else cout << ' ';
  }
  return 0;
}
