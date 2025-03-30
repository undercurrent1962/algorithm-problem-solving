#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    stack<int> S;
    vector<int> in;
    vector<char> ans;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        in.push_back(a);
    }
    int i = 0;
    for (int j = 1; j <= n; j++) {
        if (in[i] >= j) {
            S.push(j);
            ans.push_back('+');
        }
        while (!S.empty() && S.top() == in[i]) {
            S.pop();
            ans.push_back('-');
            i++;
        }
    }
    if (i != n) {
        cout << "NO";
    }
    else {
        for (char c : ans) {
            cout << c << '\n';
        }
    }
    return 0;
}