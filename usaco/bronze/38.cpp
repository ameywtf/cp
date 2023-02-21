#include <bits/stdc++.h>

using namespace std;

int totalH = 0;
int totalG = 0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string str;
    cin >> str;

    int flips = 0;
    string prevStr = str;
    for(int i = n-2; i >= 0; i-=2) {
        if((str[i] != str[i+1]) && (str[i] == 'G') && (flips % 2 == 0)) {
            flips++;
        }
    }
  
    cout << flips << '\n';

    return 0;
}
