#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);

    int n;
    cin >> n;

    vector<tuple<int, string, int>> v(n);

    for (int i = 0; i < n; i++) {
        string cowName;
        cin >> get<0>(v[i]) >> cowName >> get<2>(v[i]);

        if (cowName == "Bessie") {
            get<1>(v[i]) = "B";
        } else if (cowName == "Elsie") {
            get<1>(v[i]) = "E";
        } else {
            get<1>(v[i]) = "M";
        }
    }

    sort(v.begin(), v.end());

    unordered_map<string, int> cows = {{"B", 7}, {"E", 7}, {"M", 7}};

    int changes = 0;

    vector<string> displayCows = {"B", "E", "M"};

    for (int i = 0; i < n; i++) {
        cows[get<1>(v[i])] += get<2>(v[i]);

        int maxOutput = 0;

        for (auto cow : cows) {
            maxOutput = max(cow.second, maxOutput);
        }

        vector<string> currDisplayCows;
        for (auto cow : cows) {
            if (cows[cow.first] == maxOutput) {
                currDisplayCows.push_back(cow.first);
            }
        }

        if (displayCows != currDisplayCows) {
            changes++;
        }
        displayCows = currDisplayCows;
    }

    cout << changes
         << "\n";

    return 0;
}