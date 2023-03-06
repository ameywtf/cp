#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    string str;
    cin >> str;

    string newStr;
    newStr = str;

    int counter = 0;

    for(int i = 0; i < n; i++) {
        if(str[i] == 'o' && counter < k) {
            counter++;
            newStr[i] = 'o';
        } else {
            newStr[i] = 'x';
        }
    }

    cout << newStr << '\n';


    return 0;
}
