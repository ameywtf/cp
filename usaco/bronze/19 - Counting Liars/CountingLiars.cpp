#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<pair<char, int>> v(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> v[i].first >> v[i].second;
    }


    int minLiars = 1e9;
    for(int i = 1; i <= n; i++) {
        int currLiars = 0;
        for(int j = 1; j <=n; j++) {
            if(v[i].first == 'G' && v[i].second > i) {
                currLiars++;
            } else if(v[i].first = 'L' && v[i].second < i) {
                currLiars++;
            }
        }
        minLiars = min(currLiars, minLiars);
    }

    cout << minLiars << '\n';

    return 0;
}

//g++ -std=c++17 -O2 name.cpp -o name -Wall