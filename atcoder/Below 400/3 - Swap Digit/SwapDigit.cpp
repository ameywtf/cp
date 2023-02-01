#include <bits/stdc++.h>

using ll = long long;

using namespace std;

int main() {
    int n;
    cin >> n;

    string num1;
    string num2;

    cin >> num1 >> num2;

    ll ans = (stoll(num1) * stoll(num2)) % 998244353;
    for (int i = 0; i < n; i++) {
        swap(num1[i], num2[i]);
        ll product = (stoll(num1) * stoll(num2)) % 998244353;
        ans = min(ans, product);
        // swap(num1[i], num2[i]);
    }

    cout << ans << '\n';

    return 0;
}