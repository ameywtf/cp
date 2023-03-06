#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        for(int i = 1; i <= n; i++) {
            for(int j = 0; j < i; j++) {
                if(j == 0) {
                    cout << 1 << ' ';
                } else if(j == i-1) {
                    cout << 1 << ' ';
                } else {
                    cout << 0 << ' ';
                }
            }
            cout << '\n';
        }
    }

    return 0;
}
