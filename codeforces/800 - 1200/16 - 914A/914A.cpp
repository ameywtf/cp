#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int largest = -1e9;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        auto root = sqrt(num);
        if ((int)root != root) {
            largest = max(largest, num);
        }
    }

    cout << largest << '\n';
    return 0;
}