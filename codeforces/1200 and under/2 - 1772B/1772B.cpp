// Matrix Rotation
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    int r1, r2, c1, c2;

    for (int i = 0; i < t; i++) {
        cin >> r1 >> c1;
        cin >> r2 >> c2;

        bool isBeautiful = false;
        for (int i = 0; i < 4; i++) {
            int temp_r1 = r1;
            int temp_c1 = c1;
            int temp_r2 = r2;
            int temp_c2 = c2;

            r1 = temp_r2;
            c1 = temp_r1;
            c2 = temp_c1;
            r2 = temp_c2;

            if (r1 < c1 && r2 < c2 && r1 < r2 & c1 < c2) {
                isBeautiful = true;
                break;
            }
        }
        if (isBeautiful) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}