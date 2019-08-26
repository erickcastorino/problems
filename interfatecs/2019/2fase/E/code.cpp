#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

vector<int> a = { 1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67 };

int main () {
	ll n;
	cin >> n;
	
	ll x = 1;
	
	for (int i = 0; i < a.size(); i++) {
		if (x > n) {
			puts("N");
			break;
		}
		if (x == n) {
			puts("S");
			break;
		}
		x *= a[i];
	}
	
	return 0;
}

