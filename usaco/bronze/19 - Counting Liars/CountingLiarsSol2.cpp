#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, char>> cows(n);
    for (int i = 0; i < n; i++) {
        cin >> cows[i].second >> cows[i].first;
    }

    sort(cows.begin(), cows.end());

    vector<int> lying_left(n);
    for (int i = 1; i < n; i++) {
        // Add up all the cows that are already lying to the left of our pos.
        lying_left[i] += lying_left[i - 1];

        if (cows[i - 1].second == 'L' && cows[i].first > cows[i - 1].first) {
            /*
             * If the cow before says our position is to the left
             * but their position is strictly less than our position,
             * they're lying.
             */
            lying_left[i]++;
        }
    }

    /*
     * lying_right stores the same thing, but does it so for the cows
     * to the *right* of i.
     */
    vector<int> lying_right(n);
    // Fill it up in much the same way.
    for (int i = n - 2; i >= 0; i--) {
        lying_right[i] += lying_right[i + 1];

        if (cows[i + 1].second == 'G' && cows[i].first < cows[i + 1].first) {
            lying_right[i]++;
        }
    }

    int min_liars = n;
    for (int i = 0; i < n; i++) {
        min_liars = min(min_liars, lying_left[i] + lying_right[i]);
    }

    cout << min_liars << endl;

    return 0;
}