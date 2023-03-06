#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> prizes(n);

        for(int i = 0; i < n; i++) {
            int k;
            cin >> k;
            for(int j = 0; j < k; j++) {
                int num;
                cin >> num; 
                prizes[i].push_back(num);
            }
        }
        
        vector<int> stickers(m);
        for(int i = 0; i < m; i++) {
            cin >> stickers[i];
        }


    }

    return 0;
}
