#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int M, N, K;
    cin >> M >> N >> K;

    vector<string> s(M);
    for (int i = 0; i < M; i++) {
        cin >> s[i];
    }

    for (int i = 0; i < M; i++) {
        vector<char> str;
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < K; k++) {
                str.push_back(s[i][j]);
            }
        }
        for (int num = 0; num < K; num++) {
            for (char x : str) {
                cout << x;
            }
            cout << '\n';
        }
    }
    return 0;
}