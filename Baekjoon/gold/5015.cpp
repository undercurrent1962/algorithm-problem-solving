#include <bits/stdc++.h>
using namespace std;

string P, F;
int cache[101][101];

int match(int Pidx, int Fidx) {
    int &ret = cache[Pidx][Fidx];
    if (ret != -1) return ret;
    if (Pidx < P.size() && Fidx < F.size() && P[Pidx] == F[Fidx]) {
        return ret = match(Pidx + 1, Fidx + 1);
    }
    if (Pidx == P.size()) {
        return ret = (Fidx == F.size());
    }
    if (P[Pidx] == '*') {
        for (int skip = 0; Fidx + skip <= F.size(); skip++) {
            if (match(Pidx + 1, Fidx + skip)) {
                return ret = 1;
            }
        }
    }
    return ret = 0;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> P;
    int N;
    cin >> N;
    while (N--) {
        for (int i = 0; i < 101; i++) {
            fill(cache[i], cache[i] + 101, -1);
        }
        cin >> F;
        if (match(0, 0)) cout << F << '\n';
    }

    return 0;
}