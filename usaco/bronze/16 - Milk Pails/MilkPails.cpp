#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);

    int x, y, m;
    cin >> x >> y >> m;

    int sum = 0;
    for (int i = 0; i <= m; i++) {
        if (x * i > m) {
            break;
        }

        for (int j = 0; j <= m; j++) {
            int currSum = x * i + y * j;
            if (currSum > m) {
                break;
            }
            sum = max(sum, currSum);
        }
    }

    cout << sum << '\n';

    return 0;
}