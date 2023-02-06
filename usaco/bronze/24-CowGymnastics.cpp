#include <bits/stdc++.h>

using namespace std;

int main() {
//    freopen("gymnastics.in", "r", stdin);
//    freopen("gymnastics.out", "w", stdout);
    int k, n;
    cin >> k >> n;
        
    vector<int> temp(n+1, 0);
    vector<vector<int>> o(n+1, temp);

    for(int i = 0; i < k; i++) {
        vector<int> prevNum;
        for(int j = 0; j < n; j++) {
            int currNum;
            cin >> currNum;
            for(int z = 0; z < prevNum.size(); z++) {
                o[prevNum[z]][currNum]++;
            }
            prevNum.push_back(currNum);
        }
    }

    int count = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(o[i][j] == k) {
                count++;
            }
        }
    } 

    cout << count << '\n';
    return 0;
}
