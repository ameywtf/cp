#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> v;
    for(int i = 0; i < s.length(); i++) {
        int num = static_cast<int>(s[i]) - 48;
        if(num == 1 || num == 2 || num == 3) {
            v.push_back(num);
        }
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++) {
        cout << v[i];
        if(i < v.size()-1) {
            cout << '+';
        }
    }

    cout << '\n';

    return 0;
}
