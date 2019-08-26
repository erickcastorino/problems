#include <bits/stdc++.h>
using namespace std;

struct bandeja {
	char letra;
	int qtde;
	int face;
};

bool operator < (bandeja &x, bandeja &y) {
	return x.face < y.face;
}

bandeja b[3];

void show(char c) {
	for (int i = 0; i < 3; i++) {
		if (c == b[i].letra) {
			printf("na bandeja %c restaram %d notas\n", c, b[i].qtde);
		}
	}
}

bool possible(int j, int diff) {
	// printf("possible j %d, diff %d\n", j, diff);
	
	for (int i = 0; i < j; i++) {
		if (diff % b[i].face == 0) {
			return true;
		}
	}
	
	return false;
}

int main () {
	for (int i = 0; i < 3; i++) {
		b[i].letra = 'A' + i;
		scanf("%d %d", &b[i].face, &b[i].qtde);
	}
	
	sort(b, b + 3);
	
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		int saque;
		scanf("%d", &saque);
		
		// printf("saque = %d\n", saque);
		
		for (int j = 2; j >= 0; j--) {
			int qtd = min(saque / b[j].face, b[j].qtde);
			
			if (qtd > 0) {
				int diff = saque - (b[j].face * qtd);
				if (diff > 0 && !possible(j, diff)) {
					qtd--;
				}
			}
			
			// printf("face %d, qtd face %d, - qtde notas %d\n", b[j].face, b[j].qtde, qtd);
			b[j].qtde -= qtd;
			// printf("face %d, qtd face %d, - qtde notas %d\n", b[j].face, b[j].qtde, qtd);

			saque -= (qtd * b[j].face);
			if (saque == 0) break;
		}
		
		assert(saque == 0);
		// printf("\n\n\n");
	}
	
	show('A'); show('B'); show('C');
	return 0;
}

