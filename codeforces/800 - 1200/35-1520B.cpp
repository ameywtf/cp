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
        int temp = n;
        int p = 0;
        while(temp) {
            temp = temp/10;
            p++;
        }
        p--;
        int ans = p * 9;
        p++;
        
        for(int i = 1; i <= 9; i++) {
            string s = "";
            string t = to_string(i);
            for(int j=1; j <= p; j++)
                s += t;
            if(s <= to_string(n))
                ans++;
        }

        cout << ans << endl;
    }
    return 0;
}

