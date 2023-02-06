#include <bits/stdc++.h>

using namespace std;

int main() {
//    freopen("cownomics.in", "r", stdin);
//    freopen("cownomics.out", "w", stdout);
    int n, m;
    cin >> n >> m;

    vector<string> spottyCows(n);
    vector<string> plainCows(n);
    
    vector<string> spottyGenomes(m, "");
    for(int i = 0; i < n; i++) {
        cin >> spottyCows[i];
        for(int j = 0; j < m; j++) {
            spottyGenomes[j] += spottyCows[i][j];
//            cout << spottyGenomes[j] << " ";
        }
//        cout << '\n';
    }
    
    vector<string> plainGenomes(m, "");
    for(int i = 0; i < n; i++) {
        cin >> plainCows[i];
        for(int j = 0; j < m; j++) {
            plainGenomes[j] += plainCows[i][j];
//            cout << plainGenomes[j] << " ";
        }
//        cout << '\n';
    }
    
    int ans = 0;
    for(int i = 0; i < m; i++) {
        int counter = 0;
        for(int j = 0; j < n; j++) {
            if(plainGenomes[i].find(spottyGenomes[i][j]) != string::npos) {
                counter++;
            }
        }  
        if(counter > 0){
            continue;
        } else {
            ans++;
        } 
    } 

    cout << ans << '\n';


    return 0;
}
