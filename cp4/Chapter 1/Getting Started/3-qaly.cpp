#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    double sum = 0.000;
    while(n--) {
        double q, t;

        cin >> q >> t;

        sum += (q*t);
    }

    string s = to_string(sum);

    cout << setprecision(s.length()+3) << sum << '\n';

    return 0;
}
