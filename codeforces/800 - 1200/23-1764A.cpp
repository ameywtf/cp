#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> v(n+1);
        for(int i = 1; i <= n; i++) {
            cin >> v[i];
        }

        cout << 1 << " " << n << '\n';
//        int l = 0;
//        int r = 0;
//        int clr = -1e9;
//        for(int i = 1; i <= n; i++) {
//            int currClr = n - i - set<int>(v.begin() + i, v.end()).size();
//            if (currClr > clr) {
//                clr = currClr;
//                l = i;
//                r = n;
//            }
//        }
//
//        for(int i = 1; i <= n; i++) {
//            int currClr = n-i - 1 - set<int>(v.begin() + 1, v.end() -  i).size();
//            if (currClr > clr) {
//                clr = currClr;
//                l = 1;
//                r = n-i;
//            }
//        }
//
//        cout << l << ' ' << r << '\n';
    }

    return 0;
}
