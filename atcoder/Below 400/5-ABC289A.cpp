#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '0') {
            str[i] = '1';
        } else {
            str[i] = '0';
        }
    }

    cout << str << '\n';
    
    return 0;
}
