#include <bits/stdc++.h>
using namespace std;

int cache[1001][10];
const int MOD = 10007;

int ascentNum(int length, int start) {
    if (length == 1) return 1;
    int &ret = cache[length][start];
    if (ret != -1) return ret;
    ret = 0;
    for (int i = start; i <= 9; i++) {
        ret = (ret + ascentNum(length - 1, i)) % MOD;
    }
    return ret;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    for (int i = 0; i <= N; i++) {
        fill(cache[i], cache[i] + 10, -1);
    }

    int ans = 0;
    for (int i = 0; i <= 9; i++) {
        ans = (ans + ascentNum(N, i)) % MOD;
    }

    cout << ans;

    return 0;
}