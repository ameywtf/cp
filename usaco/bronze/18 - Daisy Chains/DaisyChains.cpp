#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            double sum = 0;
            double avg = 0;
            for (int k = i; k <= j; k++) {
                sum += v[k];
            }

            avg = sum / (j - i + 1);

            for (int p = i; p <= j; p++) {
                if (v[p] == avg) {
                    ans++;
                    break;
                }
            }
        }
    }

    cout << ans << '\n';

    return 0;
}