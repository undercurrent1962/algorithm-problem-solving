#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    long long cnt = 0;
    int height;
    stack<pair<int, int>> S;
    
    while(N--) {
        cin >> height;
        int dup = 1;

        while (!S.empty() && S.top().first <= height) {
            cnt += S.top().second;
            if (S.top().first == height) {
                dup = S.top().second + 1;
            }
            S.pop();
        }
        if (!S.empty()) {
            cnt += 1;
        }

        S.push({height, dup});
    }
    cout << cnt;
    return 0;
}