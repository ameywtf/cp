#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);

    int N;
    cin >> N;

    vector<int> s(4);
    for (int i = 1; i <= 3; i++) {
        s[i] = i;
    }

    vector<int> c(4);
    for (int i = 0; i < N; i++) {
        int a, b, g;
        cin >> a >> b >> g;
        swap(s[a], s[b]);
        c[s[g]]++;
    }

    cout << max(c[1], max(c[2], c[3])) << '\n';

    return 0;
}
