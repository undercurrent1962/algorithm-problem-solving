#include <bits/stdc++.h>
using namespace std;

int A[1000001];
int ans[1000001];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin>>N;

    for(int i=0; i<N; i++) {
        cin>>A[i];
    }
    stack<int>S;
    for(int i=N-1; i>=0; i--) {
        while(!S.empty() && S.top()<= A[i]) {
            S.pop();
        }
        ans[i] = S.empty() ? -1 : S.top();
        S.push(A[i]);
    }

    for(int i=0; i<N; i++){
        cout<<ans[i]<<' ';
    }
    return 0; 
}