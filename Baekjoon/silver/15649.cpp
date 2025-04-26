#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[9];
bool is_used[9];

void solve(int k) {
    if (k == M) {
        for (int i = 0; i < M; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i <= N; i++) {
        if (!is_used[i]) {
            arr[k] = i;
            is_used[i] = true;
            solve(k + 1);
            is_used[i] = false;
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    solve(0);

    return 0;
}