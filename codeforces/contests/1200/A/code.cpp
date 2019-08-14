#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool rooms[10];
    memset(rooms, false, sizeof rooms);

    for (char c : s) {
        if (c == 'L') {
            for (int i = 0; i < 10; i++) {
                if (!rooms[i]) {
                    rooms[i] = true;
                    break;
                }
            }
        }
        else if (c == 'R') {
            for (int i = 9; i >= 0; i--) {
                if (!rooms[i]) {
                    rooms[i] = true;
                    break;
                }
            }
        }
        else if (c >= '0' && c <= '9') {
            rooms[c - '0'] = false;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (rooms[i]) cout << '1';
        else cout << '0';
    }

    cout << endl;

    return 0;
}
