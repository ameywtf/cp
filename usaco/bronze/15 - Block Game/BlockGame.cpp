#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);

    int n;
    cin >> n;

    unordered_map<char, int> ans;

    for (int i = 97; i <= 122; i++) {
        char letter = (char)i;
        ans.insert({letter, 0});
    }

    for (int i = 0; i < n; i++) {
        string s1;
        string s2;
        cin >> s1 >> s2;

        unordered_map<char, int> m1;
        unordered_map<char, int> m2;

        for (int j = 0; j < s1.length(); j++) {
            m1[s1[j]] += 1;
        }
        for (int j = 0; j < s2.length(); j++) {
            m2[s2[j]] += 1;
        }

        unordered_map<char, int> preAns;

        // adding the largest num of each letter needed to prevAns
        for (int j = 0; j < s1.length(); j++) {
            if (!m2[s1[j]]) {
                preAns[s1[j]] = m1[s1[j]];
            } else if (m1[s1[j]] >= m2[s1[j]]) {
                preAns[s1[j]] = m1[s1[j]];
            } else {
                preAns[s1[j]] = m2[s1[j]];
            }
        }

        // same as above but doing it w/ m2 so that no letters are left off
        for (int j = 0; j < s2.length(); j++) {
            if (!preAns[s2[j]]) {
                preAns[s2[j]] = m2[s2[j]];
                continue;
            } else if (m2[s2[j]] > preAns[s2[j]]) {
                preAns[s2[j]] = m2[s2[j]];
            }
        }

        for (auto e : preAns) {
            ans[e.first] += e.second;
        }
    }

    for (int i = 97; i <= 122; i++) {
        cout << ans[(char)i] << '\n';
        //(char)i << ": " <<
    }

    return 0;
}