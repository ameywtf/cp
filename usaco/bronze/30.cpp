#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

//    freopen("whereami.in", "r", stdin);
//    freopen("whereami.out", "w", stdout);
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 1; i < n; i++) {
        string str;
        bool invalid = false;
        unordered_map<string, int> m;
        for(int j = 0; j < n; j++) {
            str = s.substr(j, i);
            if(!m.count(str)) {
                m[str]++;
            } else {
                invalid = true;
                break;
            }
        }
        if(!invalid) {
            cout << i << '\n';
            break;
        }
    }

    return 0;
}
