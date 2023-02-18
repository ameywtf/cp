// Bowine Genomics
#include <bits/stdc++.h>

using namespace std;

int main() {
//    freopen("cownomics.in", "r", stdin);
//    freopen("cownomics.out", "w", stdout);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> sc(n, vector<int>(m));
    vector<vector<int>> pc(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        for(int j = 0; j < m; j++) {
            int num;
            if(str[j] == 'A') num = 0;
            if(str[j] == 'C') num = 1;
            if(str[j] == 'G') num = 2;
            if(str[j] == 'T') num = 3;
            sc[i][j] = num;
        }
    }

    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        for(int j = 0; j < m; j++) {
            int num;
            if(str[j] == 'A') num = 0;
            if(str[j] == 'C') num = 1;
            if(str[j] == 'G') num = 2;
            if(str[j] == 'T') num = 3;
            pc[i][j] = num;
        }
    }
    int counter = 0;
    for(int j = 0; j < m; j++) {
        for(int k = j+1; k < m; k++) {
            for(int q = k+1; q < m; q++){
                vector<int> v(1000, 0);
                bool good = true;
                for(int z = 0; z < n; z++) {
                    v[sc[z][j]*16 + sc[z][k]*4 + sc[z][q]] = 1;
                }
                for(int z = 0; z < n; z++) {
                    if(v[pc[z][j]*16 + pc[z][k]*4 + pc[z][q]]) good = false;
                }

                if(good) {
                    counter++;
                }
            }
        }
    }
    cout << counter << '\n';

    return 0;
}
