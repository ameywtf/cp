#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    int ans = 0;

    for(int i = 0; i < n; i++) {
        int currSum = 0;
        for(int j = 0; j <= i; j++) {
            currSum += v[j];
//            cout << "curr " << currSum << '\n';
        }
        int remSum = 0;
        for(int j = i+1; j < n; j++) {
            remSum += v[j];
//            cout << "rem " << remSum << '\n';
        }

        if(currSum > remSum) {
            ans = i;
            break;
        }
    }

    cout << ans+1 << '\n';
    return 0;
}
