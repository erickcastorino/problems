#include <bits/stdc++.h>
using namespace std;

const int Z = 26;

int o1[Z][Z];
int o2[Z];
bool seen[Z];

int main () {
	for (int i = 0; i < Z; i++) {
		o2[i] = 0;
		
		for (int j = 0; j < Z; j++) {
			o1[i][j] = 0;
		}
	}
	
	int t;
	cin >> t;
	
	float suportemini, confiancamini;
	cin >> suportemini >> confiancamini;
	
	for (int i = 0; i < t; i++) {
		string s;
		cin >> s;
		
		memset(seen, false, sizeof seen);
		
		for (char c : s) {
			int u = c - 'A';
			seen[u] = true;
		}
		
		for (int j = 0; j < Z; j++) {
			if (seen[j]) {
				o2[j]++;

				for (int k = 0; k < Z; k++) {
					if (seen[k]) {
						o1[j][k]++;
						//o1[k][j]++;
					}
				}
			}
		}
	}
	
	bool one = false;
	
	for (int i = 0; i < Z; i++) {
		for (int j = 0; j < Z; j++) {
			if (i == j) continue;
			
			float suporte = ((float) o1[i][j]) / ((float) t);
			float confianca = ((float) o1[i][j]) / ((float) o2[i]);
			
			if (suporte >= suportemini && confianca >= confiancamini) {
				printf("%c -> %c [%.3f %.3f]\n", 'A' + i, 'A' + j, confianca, suporte);
				one = true;
			}
		}
	}
	
	if (!one) cout << "nada foi encontrado" << endl;
	
	return 0;
}

