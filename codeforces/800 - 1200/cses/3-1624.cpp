#include <bits/stdc++.h>

using namespace std;

string s[8];
vector<int> col(8, 0), diag1(64, 0), diag2(64, 0);
int ans = 0;

void dfs(int r) {
    if(r == 8) {
        ans++;
        return;
    }
    for(int i = 0; i < 8; i++) {
        if(s[r][i] == '.' && !col[i] && !diag1[i+r] && !diag2[i-r+7]) {
            col[i] = diag1[i+r] = diag2[i-r+7] = 1;
            dfs(r+1);
            col[i] = diag1[i+r] = diag2[i-r+7] = 0;
        }
    }
}

int main() {
    for(int i = 0; i < 8; i++) {
        cin >> s[i];
    }
    dfs(0);
    cout << ans << '\n';
    return 0;
}
