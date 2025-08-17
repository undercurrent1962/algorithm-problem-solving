#include <bits/stdc++.h>
using namespace std;

int cache[101][10]; // cache[N][start] = 길이가 N이고 start로 시작하는 계단수의 개수
const int MOD = 1000000000;

int stairNum(int N, int start) { // 길이가 N이고 start로 사작하는 계단수 개수
    if (start < 0 || start > 9) return 0;
    if (N == 1) return 1;
    int &ret = cache[N][start];
    if (ret != -1) return ret;
    return ret = (stairNum(N - 1, start - 1) + stairNum(N - 1, start + 1)) % MOD;
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
    for (int i = 1; i <= 9; i++) {
        ans = (ans + stairNum(N, i)) % MOD;
    }
    cout << ans;
    return 0;
}