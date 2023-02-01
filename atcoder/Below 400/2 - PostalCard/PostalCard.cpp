#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> vn(n);
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        vn[i] = str.substr(str.length() - 3, 3);
    }

    vector<string> vm(m);
    for (int i = 0; i < m; i++) {
        cin >> vm[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (vn[i] == vm[j]) {
                count++;
                break;
            }
        }
    }
    cout << count << '\n';

    return 0;
}