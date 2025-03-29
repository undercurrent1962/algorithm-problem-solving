#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;
    queue<int> Q;
    for (int i = 1; i <= N; i++) {
        Q.push(i);
    }
    cout << '<';
    for (int i = 0; i < N - 1; i++) {
        for (int i = 0; i < K - 1; i++) {
            Q.push(Q.front());
            Q.pop();
        }
        cout << Q.front() << ", ";
        Q.pop();
    }
    cout << Q.front() << '>';

    return 0;
}