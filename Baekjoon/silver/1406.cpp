#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    list<char> L;
    for (char c : s) {
        L.push_back(c);
    }
    auto cursor = L.end();
    int n;
    cin >> n;
    char command;
    while (n--) {
        cin >> command;
        if (command == 'L') {
            if (cursor != L.begin()) {
                cursor--;
            }
        }
        else if (command == 'D') {
            if (cursor != L.end()) {
                cursor++;
            }
        }
        else if (command == 'B') {
            if (cursor != L.begin()) {
                cursor = L.erase(--cursor);
            }
        }
        else {
            char c;
            cin >> c;
            L.insert(cursor, c);
        }
    }
    for (auto c : L) {
        cout << c;
    }
    return 0;
}