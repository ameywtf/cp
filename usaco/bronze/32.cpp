#include <bits/stdc++.h>

using namespace std;

bool check(int& s, int& m, int& e) {
    return (s+1 == m && m+1 == e);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
//    freopen("herding.in", "r", stdin);
//    freopen("herding.out", "w", stdout);
    
    int s,m,e;

    
    cin >> s >> m >> e;

    int min = 0;
    if(!check(s,m,e)) {
        if(abs(e - m) == 2) {
            min++;
        } 
        else if(abs(s - m) == 2)  {
            min++;
        }
        else {
            min+=2;
        }
    }
        
    cout << min << '\n';
       
    cout << max(abs(m - s - 1), abs(e - m - 1)) << '\n';
    
    return 0;
}
