#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum = 0;
    int minimum = INT_MAX;
    for (int i = 0; i < 7; i++) {
        int n;
        cin >> n;
        if (n % 2) {
            sum += n;
            minimum = min(minimum, n);
        }
    }
    if (sum) {
        cout << sum << '\n'
             << minimum;
    }
    else {
        cout << -1;
    }

    return 0;
}