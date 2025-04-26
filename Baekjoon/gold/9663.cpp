#include <bits/stdc++.h>
using namespace std;

int N;
bool table[16][16];

bool column_used[16];
bool diagonal_used1[40];
bool diagonal_used2[40];
int ans = 0;

void solve(int k) {
    if (k == N) {
        ans++;
        return;
    }
    for (int i = 0; i < N; i++) {
        if (!(column_used[i] || diagonal_used1[i + k] || diagonal_used2[N - 1 - (i - k)])) {
            column_used[i] = true;
            diagonal_used1[i + k] = true;
            diagonal_used2[N - 1 - (i - k)] = true;
            solve(k + 1);
            column_used[i] = false;
            diagonal_used1[i + k] = false;
            diagonal_used2[N - 1 - (i - k)] = false;
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    solve(0);

    cout << ans;
    return 0;
}