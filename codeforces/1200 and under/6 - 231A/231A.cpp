// Team
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int num = 0;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b + c > 1) {
            num++;
        }
    }
    cout << num;

    return 0;
}