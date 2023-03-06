#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    unordered_set<char> found;
    vector<int> v;
    int counter = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'h') {
            found.insert('h');
        } else if(s[i] == 'e' && found.find('h') != found.end()) {
            found.insert('e');
        } else if(s[i] == 'l' && found.find('e') != found.end()) {
            found.insert('l');
            counter++;
        } else if(s[i] == 'o' && found.find('l') != found.end()) {
            found.insert('o');
        } 
    }

    if(found.find('o') != found.end() && counter >= 2) {
        cout << "YES" << '\n';
    } else { 
        cout << "NO" << '\n';
    }

    return 0;
}
