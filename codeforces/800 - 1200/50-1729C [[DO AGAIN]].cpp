#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        vector<int> v(s.length());

        for(int i = 0; i < s.length(); i++) {
            v[i] = (int)s[i] - 96;
        }

        int first = v[0];
        int last = v[v.size()-1];

        vector<int> out;
        for(int i = 1; i < v.size()-1; i++) {
           if((v[i] >= first && v[i] <= last) || (v[i] <= first && v[i] >= last)) {
               out.push_back(i);
           }
        }

        cout << abs(v[0] - v[v.size()-1]) << ' ' << out.size()+2 << '\n';

        cout << 1  << ' ';

        for(auto e : out) {
            cout << e << ' ';
        }

        cout << v.size() << '\n';

    }

    return 0;
}
