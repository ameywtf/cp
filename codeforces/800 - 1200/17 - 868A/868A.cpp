#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        string c1 = "";
        for (int j = 0; j < n; j++) {
            c1 += v[i] + v[j];
        }
        if (c1.find(s) != -1) {
            cout << "YES";
            return 0;
        }

        string c2 = "";
        for (int j = 0; j < n; j++) {
            c2 += v[j] + v[j];
        }
        if (c2.find(s) != -1) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}