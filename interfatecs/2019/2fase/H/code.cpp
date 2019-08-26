#include <bits/stdc++.h>
using namespace std;

char cor[50];

vector<int> verde, azul, amarelo, vermelho, laranja;
int iverde, iazul, iamarelo, ivermelho, ilaranja;

int getNext() {
	char c = getchar();
	while ((c == '\n') || (c == ' ')) {
		c = getchar();
	}

	if (c >= '0' && c <= '9') {
		int x = 0;
		while (c >= '0' && c <= '9') {
			x = (x * 10) + (c - '0');
			c = getchar();
		}
		scanf("%s", cor);
		if (cor[3] == 'D') verde.push_back(x);
		if (cor[3] == 'L') azul.push_back(x);
		if (cor[3] == 'R') amarelo.push_back(x);
		if (cor[3] == 'A') laranja.push_back(x);
		if (cor[3] == 'M') vermelho.push_back(x);
		
		return true;
	}
	
	else if (c == 'b') {
		scanf("%s", cor);
		if (ivermelho < vermelho.size()) {
			printf("%d\n", vermelho[ivermelho]);
			ivermelho++;
		} else if (ilaranja < laranja.size()) {
			printf("%d\n", laranja[ilaranja]);
			ilaranja++;
		} else if (iamarelo < amarelo.size()) {
			printf("%d\n", amarelo[iamarelo]);
			iamarelo++;
		} else if (iverde < verde.size()) {
			printf("%d\n", verde[iverde]);
			iverde++;
		} else if (iazul < azul.size()) {
			printf("%d\n", azul[iazul]);
			iazul++;
		} else assert(false);
		
		return true;
	}
	
	return false;
}

int main () {
	//freopen("in2.txt", "r", stdin);
	//freopen("out2.txt", "w", stdout);
	
	verde.clear();
	azul.clear();
	amarelo.clear();
	vermelho.clear();
	laranja.clear();
	
	iverde = 0;
	iazul = 0;
	iamarelo = 0;
	ivermelho = 0;
	ilaranja = 0;

	while (getNext());
	return 0;
}

