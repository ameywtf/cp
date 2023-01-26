#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);

    int x, y, m;
    cin >> x >> y >> m;

    int sum = 0;

    vector<int> permutation;

    for (int i = 0; i < (m / x); i++) {
        permutation.push_back(i * x);
    }

    for (int i = 0; i < (m / y); i++) {
        permutation.push_back(i * y);
    }

    do {
        int prevSum = 0;
        for (int i = 0; i < permutation.size(); i++) {
            if (permutation[i] + prevSum <= m) {
                prevSum += permutation[i];
            }
        }
        sum = max(sum, prevSum);
    } while (next_permutation(permutation.begin(), permutation.end()));

    cout << sum << '\n';

    return 0;
}