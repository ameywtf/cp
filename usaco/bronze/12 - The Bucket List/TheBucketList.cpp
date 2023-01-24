#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);

    // Time Complexity - O(n + t)

    int n;
    cin >> n;

    int s[101] = {0}, t[101] = {0}, b[101] = {0};
    int start[1001] = {0};
    int finish[1001] = {0};

    for (int i = 1; i <= n; i++) {
        cin >> s[i] >> t[i] >> b[i];
        start[s[i]] = i;
        finish[t[i]] = i;
    }

    int bucketsNeeded = 0;
    int curr_b = 0;

    for (int i = 1; i <= 1000; i++) {
        if (start[i]) {
            curr_b += b[start[i]];
        }
        bucketsNeeded = max(bucketsNeeded, curr_b);
        if (finish[i]) {
            curr_b -= b[finish[i]];
        }
    }

    cout << bucketsNeeded << '\n';
}