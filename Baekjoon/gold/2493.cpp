#include <bits/stdc++.h>
using namespace std;

int tower[500001];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> tower[i];
    }

    stack<int> S;
    for (int i = 0; i < N; i++) {
        while (!S.empty() && tower[S.top()] < tower[i]) {
            S.pop();
        }
        if (S.empty()) {
            cout << "0 ";
        }
        else {
            cout << S.top() + 1 << ' ';
        }
        S.push(i);
    }

    return 0;
}