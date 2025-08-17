#include <bits/stdc++.h>
using namespace std;

int cache[1001][31][2];
int falling[1001];
int T, W;

int jadu(int t, int w, int curTree) {
    if (t > T || w < 0) return 0;
    int &ret = cache[t][w][curTree];
    if (ret != -1) return ret;
    int unchanged = jadu(t + 1, w, curTree) + (curTree == falling[t]);
    int changed = jadu(t, w - 1, !curTree);
    return ret = max(unchanged, changed);
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T >> W;
    for (int i = 1; i <= T; i++) {
        cin >> falling[i];
        falling[i]--;
        for (int j = 0; j <= W; j++) {
            cache[i][j][0] = cache[i][j][1] = -1;
        }
    }

    cout << jadu(1, W, 0);

    return 0;
}