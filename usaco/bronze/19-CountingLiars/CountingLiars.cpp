#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<char, int>> cows(n);
    for(int i = 0; i < n; i++) {
        cin >> cows[i].first >> cows[i].second;
    }
    
    int minLiars = 1e9;
    for(int i =0; i < n; i++) {
        int currLiars = 0;
        for(int j = 0;j < n; j++) {
            if(cows[j].first == 'G' && cows[j].second > cows[i].second) {
                currLiars++;
            } else if(cows[j].first == 'L' && cows[j].second < cows[i].second) {
                currLiars++;
            }
        }
        minLiars = min(currLiars, minLiars);
        cout << minLiars << '\n';
    }
    cout << minLiars << '\n';
}
