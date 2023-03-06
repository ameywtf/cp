#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string ans = "";
    for(int i = 0; i < n/2; i++) {
        if(i % 2 == 0) {
            ans+="aa";
        } else {
            ans+="bb";
        }
    }

    if(n % 2 == 1) {
        if(ans[ans.length()-1] == 'a') {
            ans+='b';
        } else {
            ans+='a';
        }
    }
   
    cout << ans << '\n';

    return 0;
}
