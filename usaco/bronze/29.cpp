// Sleeping in Class
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int sum = 0;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        int numHours = 0;
        int m;
        for(int i = 0; i <= sum; i++) {
            if(i != 0 && sum%i != 0) {
                continue;
            }
            bool valid = true;
            int currSum = 0;
            for(int j = 0; j < n; j++) {
                currSum += v[j];
                if(currSum > i) {
                    valid = false;
                    break;
                } else if(currSum == i) {
                    currSum = 0;
                }
            }

            if (valid) {
				if (i == 0) {
					cout << 0 << '\n';
				} else {
					cout << n - sum/i << '\n';
				}
				break;
			}
        }
    }
    return 0;
}
