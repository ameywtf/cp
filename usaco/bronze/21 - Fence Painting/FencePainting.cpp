#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    int intersection = max(min(b, d) - max(a, c), 0);

    int sum = (b - a) + (d - c);

    cout << sum - intersection << '\n';

    return 0;
}

/*
    vector<int> line(100, 0);
    for (int i = a; i < b; i++) {
        line[i] = 1;
    }
    for (int i = c; i < d; i++) {
        line[i] = 1;
    }

    int count = 0;
    for (int i = 0; i < 100; i++) {
        if (line[i]) {
            count++;
        }
    }

    cout << count << '\n';

*/