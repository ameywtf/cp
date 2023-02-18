#include <bits/stdc++.h>
using namespace std;


vector<long long> v(20);
int n;


long long solve(int k, long long sum1, long long sum2) {
    if(k == n) {
        return abs(sum1-sum2);
    } else {
        return min(solve(k+1, sum1+v[k], sum2), solve(k+1, sum1, sum2+v[k]));
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << solve(0,0,0) << '\n';

    return 0;
}
