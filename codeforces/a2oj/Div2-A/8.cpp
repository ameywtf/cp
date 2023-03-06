#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s = to_string(n);
    
    int num4s = 0;
    int num7s = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '4') {
            num4s++;
        } else if(s[i] == '7') {
            num7s++;
        } else {
            num4s = 0;
            num7s = 0;
            break;
        }
    }

    if(num4s && num7s) {
        cout << "YES" << '\n';
        return 0;
    }

    if(n % 4 == 0 || n % 7 == 0 || n % 44 == 0 ||
       n % 47 == 0 || n % 74 == 0 || n % 77 == 0 ||
       n % 444 == 0 || n % 447 == 0 || n % 477 == 0 || 
       n % 474 == 0 || n % 744 == 0 || n % 747 == 0 ||
       n % 774 == 0 || n % 777 == 0) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }

    return 0;
}
