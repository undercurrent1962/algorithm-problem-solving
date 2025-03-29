#include <bits/stdc++.h>
using namespace std;

string s = "DCBAE";

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            int n;
            cin >> n;
            sum += n;
        }
        cout << s[sum] << "\n";
    }

    return 0;
}