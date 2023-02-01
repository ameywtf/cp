#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int numFor = 0;
    int numAgainst = 0;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        if (str == "For") {
            numFor++;
        } else {
            numAgainst++;
        }
    }

    cout << (numAgainst > numFor ? "No" : "Yes");

    return 0;
}