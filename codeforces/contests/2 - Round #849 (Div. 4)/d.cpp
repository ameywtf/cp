/*
!!----WAS UNABLE TO SOLVE, INCORRECT SOLUTION----!!
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        unordered_map<char, int> m;

        for (int i = (int)'a'; i <= (int)'z'; i++) {
            m[(char)i] = 0;
        }

        for (int j = 0; j < n; j++) {
            m[str[j]]++;
        }

        int numStr = 0;
        int len = 0;
        // for (int i = (int)'a'; i <= (int)'z'; i++) {
        //     // m[(char)i]
        // }

        cout << numStr << '\n';
    }

    return 0;
}
