#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);

    int n;
    cin >> n;

    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    int dist = 0;
    for (int i = 1; i <= n; i++) {
        int currDist = 0;
        for (int j = 0; j < n; j++) {
            int index = j + i > n ? index = ((j + i) - n) : j + i;
            // int mul = j == 0 ? 0 : j + 1;
            currDist = currDist + (j * v[index]);
        }
        dist = i == 1 ? currDist : min(dist, currDist);
    }

    cout << dist;

    return 0;
}