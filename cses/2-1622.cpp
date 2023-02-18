#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    vector<string> v;
    sort(s.begin(), s.end());
    do {
        v.push_back(s);
    } while(next_permutation(s.begin(), s.end()));

    cout << v.size() << '\n';
    for(auto str : v) {
        cout << str << '\n';
    }

    return 0;
}
