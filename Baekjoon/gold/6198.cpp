#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    stack<int> S;
    long long ans = 0;
    while (N--) {
        int k;
        cin >> k;
        while (!S.empty() && S.top() <= k) {
            S.pop();
        }
        ans+=S.size();
        S.push(k);
    }
    cout << ans;
    return 0;
}