#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;
    
    vector<int> v(1000000);
    for(int i = 0; i < 1000000; i++) {
        v[i] = i;
    }

    int moves = 0;

    int l = 0; int r = 1000000-1;
    bool flag = false;
    while(l <= r) {
        int mid = l + (r-l)/2;
        if(v[mid] == num) {
            flag = true;
            break;
        }

        if(v[mid] < num) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }

        moves++;
    }

    cout << flag << '\n' << moves << '\n';

    return 0;
}
