#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int m; 
        cin >> m;
        
        int num = 1;
        int i = 0;
        while(pow(10, i) <= m) {
            num = pow(10, i);
            i++;
        }

        cout << m - num << '\n';
    }

    return 0;
}
