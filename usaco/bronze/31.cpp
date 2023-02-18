#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

//    freopen("notlast.in", "r", stdin);
//    freopen("notlast.out", "w", stdout);

    int n;
    cin >> n;

    unordered_map<string, int> m = {{"Bessie", 0},{"Elsie", 0},{"Daisy", 0},
                          {"Gertie", 0},{"Annabelle", 0}, {"Maggie", 0}, 
                          {"Henrietta", 0}};

    for(int i =0; i < n; i++) {
        string str;
        int num;
        cin >> str >> num;

        m[str] += num;
    }
    
    int smallest = 1e9; 
    for(auto e : m) {
        smallest = min(smallest, e.second);
    }

    vector<string> toErase;
    for(auto e : m) {
        if(e.second == smallest) {
            toErase.push_back(e.first);
        }
    }

    
    for(int i = 0; i < toErase.size(); i++) {
        m.erase(toErase[i]);
    }

    int ans = 1e9;
    for(auto e : m) {
        ans = min(ans, e.second);
    }

    int count = 0;
    for(auto e : m) {
        if(e.second == ans) {
            count++;
        }
    }

    if(count > 1) {
        cout << "Tie" << '\n';
    } else {
        for(auto e : m) {
            if(e.second == ans) {
                cout << e.first << '\n';
                break;
            }
        }
    }
    
    return 0;
}
