#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    string ans = "";
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'R' && s[i+1] == 'B' && s[i+2] == 'L') {
            ans+='C';
            i+=2;
            continue;
        } if(s[i] == 'R' && s[i+1] == 'L' && s[i+2] == 'B') {
            ans+='C';
            i+=2;
            continue;
        } if(s[i] == 'L' && s[i+1] == 'R' && s[i+2] == 'B') {
            ans+='C';
            i+=2;
            continue;
        } if(s[i] == 'L' && s[i+1] == 'B' && s[i+2] == 'R') {
            ans+='C';
            i+=2;
            continue;
        } if(s[i] == 'B' && s[i+1] == 'R' && s[i+2] == 'L') {
            ans+='C';
            i+=2;
            continue;
        } if(s[i] == 'B' && s[i+1] == 'L' && s[i+2] == 'R') {
            ans+='C';
            i+=2;
            continue;
        } 
        
        if(s[i] == 'R') {
            ans+='S';
        } else if(s[i] == 'B') {
            ans+='K';
        } else if(s[i] == 'L') {
            ans+='H';
        }
    }
    
    cout << ans << '\n';
    return 0;
}
