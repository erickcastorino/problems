#include <bits/stdc++.h>
using namespace std;

int t = 0;
int b;

typedef struct {
    int i, freeAt;
} banheiroLivre;

bool operator > (banheiroLivre x, banheiroLivre y) {
    if (x.freeAt == y.freeAt) {
        return x.i > y.i;
    }
    return x.freeAt > y.freeAt;
}

typedef struct {
    char who, delay;
} tempoMedio;

vector<tempoMedio> a;

typedef struct {
    char who;
    int banheiro;
    int tempoEspera;
} pessoa;

const int N = 1000;
pessoa p[N + 10];

void doit() {
    priority_queue<banheiroLivre, vector<banheiroLivre>, greater<banheiroLivre>> q;
    
    for (int i = 1; i <= b; i++) {
        q.push({ i, 0 });
    }

    for (int i = 1; i <= N; i++) {
        banheiroLivre next = q.top();
        q.pop();

        tempoMedio x = a[(i - 1) % a.size()];

        p[i].who = x.who;
        p[i].banheiro = next.i;
        p[i].tempoEspera = next.freeAt;
        
        q.push({ next.i, next.freeAt + x.delay });
    }

    t++;
    cout << "Consulta " << t << ":\n";

    int n;
    cin >> n;

    while (n--) {
        int i;
        cin >> i;
        cout << p[i].tempoEspera << ' ' << p[i].banheiro << ' ' << p[i].who << endl;
    }
}

void read() {
    char c;
    cin >> c;

    a.clear();
    if (c == 'A') {
        a.push_back({ 'H', 3 });
        a.push_back({ 'M', 10 });
        a.push_back({ 'M', 10 });
    } else if (c == 'C') {
        a.push_back({ 'H', 5 });
        a.push_back({ 'M', 15 });
        a.push_back({ 'M', 15 });
        a.push_back({ 'M', 15 });
    } else if (c == 'S') {
        a.push_back({ 'H', 1 });
        a.push_back({ 'H', 1 });
        a.push_back({ 'M', 5 });
    } else assert(false);

    doit();
}

int main () {
    while (true) {
        cin >> b;
        if (!b) return 0;
        read();
    }
}