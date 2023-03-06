#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    set<int> s;
    while(n--) {
        int num;
        cin >> num;
        s.insert(num);
    }

    for(auto e : s) {
        cout << e << '\n';
    }

    return 0;
}
