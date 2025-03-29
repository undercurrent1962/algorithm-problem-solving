#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        list<char> L;
        auto t = L.begin();
        string s;
        cin >> s;
        for (char c : s) {
            if (c == '<') {
                if (t != L.begin()) t--;
            }
            else if (c == '>') {
                if (t != L.end()) t++;
            }
            else if (c == '-') {
                if(t!=L.begin()) t = L.erase(--t);
            }
            else {
                L.insert(t, c);
            }
        }
        for (auto i : L) {
            cout << i;
        }
        cout << '\n';
    }

    return 0;
}