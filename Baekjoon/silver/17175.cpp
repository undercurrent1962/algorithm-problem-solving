#include <bits/stdc++.h>
using namespace std;

int cache[51];
const int MOD = 1000000007;

int countFibo(int n) {
    if (n <= 1) return 1;
    int &ret = cache[n];
    if (ret != 0) return ret;
    return ret = (countFibo(n - 1) + countFibo(n - 2) + 1) % MOD;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    cout << countFibo(n);

    return 0;
}