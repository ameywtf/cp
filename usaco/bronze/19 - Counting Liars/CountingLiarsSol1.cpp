// this is my solution, has a ridiculous time complexity O(n^2 log n) but it is what it is,
// for a solution w/ O(n log n) solution see CountingLiarsSol2.cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<char, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    vector<int> c;
    for (int i = 0; i < n; i++) {
        int lyingCows = 0;
        for (int j = i + 1; j < n; j++) {
            if (v[i].first == 'L' && v[j].first == 'L' || v[i].first == 'G' && v[j].first == 'G') {
                v[i].second != v[j].second ? lyingCows += 1 : lyingCows += 0;
            } else if (v[i].first == 'L' && v[j].first == 'G') {
                v[i].second > v[j].second ? lyingCows += 0 : lyingCows += 1;
            } else if (v[i].first == 'G' && v[j].first == 'L') {
                v[i].second > v[j].second ? lyingCows += 1 : lyingCows += 0;
            }
        }
        c.push_back(lyingCows);
    }

    sort(c.begin(), c.end());
    
    cout << c.back() << '\n';

    return 0;
}