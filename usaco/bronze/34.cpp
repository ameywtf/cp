#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
	int ans = 1e9;
   
	cin >> n >> m;
	vector<pair<int, int>> cows(n);
    vector<int> ci(n);
    vector<pair<int, int>> cooler(m);
    vector<int> pi(m);
    vector<int> mi(m);
    
    for(int i = 0; i < n; i++) {
       cin >> cows[i].first >> cows[i].second >> ci[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> cooler[i].first >> cooler[i].second >> pi[i] >> mi[i];
    }

    for(int mask = 0; mask < (1<<m); mask++) {
		int currCost = 0;
		int arr[101] = {0};
		bool check = true;
        for(int i = 0; i < m; i++) {
            if(mask & (1<<i)) {
				currCost += mi[i];
				for(int j = cooler[i].first; j <= cooler[i].second; j++) {
					arr[j] += pi[i];
				}
            }
        }

		for(int i = 0; i < n; i++) {
			for(int j = cows[i].first; j <= cows[i].second; j++) {
				if(arr[j] < ci[i]) {
					check = false;
				}
			}
		}

		if(check) {
			ans = min(ans, currCost);
		}
    }
    
	cout << ans << '\n';

    return 0;
}
