#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, k, r, c;
        cin >> n >> k >> r >> c;

        char a[n+1][n+1];

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if((i+j)%k == (r+c)%k) {
                    a[i][j] = 'X';
                } else {
                    a[i][j] = '.';
                }
                cout << a[i][j];
            }
            cout << '\n';
        }
        

    }

    return 0;
}

/*
    6 3 4 2

    .X..X.
    X..X..
    ..X..X
    .X..X.
    X..X..
    ..X..X  
*/
