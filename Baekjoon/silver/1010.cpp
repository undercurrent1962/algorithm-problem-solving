#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;

ull cache[31][31];

int N, M;

int comb(int n, int r) {
    if (r == 0) return 1;
    if (n == r) return 1;
    ull &ret = cache[n][r];
    if (ret != 0) return ret;
    return ret = comb(n - 1, r - 1) + comb(n - 1, r);
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        cin >> N >> M;
        cout << comb(M, N) << '\n';
    }

    return 0;
}