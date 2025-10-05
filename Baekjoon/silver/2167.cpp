#include <bits/stdc++.h>
using namespace std;

int A[301][301];
int pSum[301][301];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> A[i][j];
            pSum[i][j] += pSum[i][j - 1] + A[i][j];
        }
    }

    int K;
    cin >> K;

    while (K--) {
        int i, j, x, y;
        cin >> i >> j >> x >> y;
        int sum = 0;
        for (i; i <= x; i++) {
            sum += (pSum[i][y] - pSum[i][j - 1]);
        }
        cout << sum << '\n';
    }
    return 0;
}