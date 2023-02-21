#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        
        int numQ = 0;
        int numA = 0;
        bool reachedA = false;
        for(int i = 0; i < n; i++) {
            if(str[i] == 'Q') {
                reachedA = false;
                numQ++;
            } else if(str[i] == 'A' && !reachedA) {
                numA++;
                reachedA = true;
            }
        }
        
        bool taken[101] = {false};
        bool off = true;
        for(int i = 0; i < n; i++) {
            if(str[i] == 'Q') {
                for(int j = i; j < n; j++) {
                    if(str[j] == 'A' && !taken[j]) {
                        taken[j] = true;
                        off = false;
                        break;
                    } else {
                        off = true;
                    }
                }
            }
        }
        if(off) {
            cout << "No" << '\n';
        } else {
            cout << "Yes" << '\n';
        }

    }
    return 0;
}
