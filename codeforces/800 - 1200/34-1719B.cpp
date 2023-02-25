#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n,k;
		cin>>n>>k;
		bool valid = false;
		vector<pair<int,int>>v;
		for(int i = 1; i <= n; i+=2) {
			if(((i+k)*(i+1)) % 4 == 0) {
			    v.push_back({i,i+1});
                valid = true;
            }
			else if (((i+1 + k) * i) % 4 == 0) {
			    v.push_back({i+1,i});
                valid = true;
            } else {
                valid = false;
                break;
            }
		}
		if(valid) {
			cout << "YES" << '\n';
			for(int i = 0; i < n/2; i++)
			    cout << v[i].first << " " << v[i].second << '\n';
		} else {
            cout << "NO" << '\n'; 
        }
    } 
    return 0;
}
