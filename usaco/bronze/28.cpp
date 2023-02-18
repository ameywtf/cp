#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("balancing.in", "r", stdin);
    freopen("balancing.out", "w", stdout);

    int n, b;
    cin >> n >> b;
    vector<int> x(n);
    vector<int> y(n);
//    vector<vector<int>> v(n, vector<int>(2));
    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    
    int m = n;
   for(int z = 0; z < n; z++) {
        for(int i = 0; i < n; i++) {
            int pos_x = x[i] + 1;
            int pos_y = y[z] + 1;

            int q1 = 0;
            int q2 = 0;
            int q3 = 0;
            int q4 = 0;

            for(int j = 0; j < n; j++) {
                if(x[j] < pos_x && y[j] > pos_y) {
                    q1++;
                } else if(x[j] > pos_x && y[j] > pos_y) {
                    q2++;
                } else if(x[j] > pos_x && y[j] < pos_y) {
                    q3++;
                } else if(x[j] < pos_x && y[j] < pos_y) {
                    q4++;
                }
            }

            m = min(m, max({q1,q2,q3,q4}));
        }

   }
    
    
    cout << m << '\n';

    return 0;
}
