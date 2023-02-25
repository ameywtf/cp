#include<bits/stdc++.h>

using namespace std;

bool isSorted(string& t1, string& t2) {
    bool sorted = true;
    for(int i = 0; i < t1.size(); i++) {
        if(t1[i] == t1[i+1]) {
            sorted = false;
        }
    }
    for(int i = 0; i < t2.size(); i++) {
        if(t2[i] == t2[i+1]) {
            sorted = false;
        }
    }
    return sorted;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        string t1;
        string t2;

        cin >> t1 >> t2;
         
        string rt1 = t1;
        string rt2 = t2;

        bool sorted = isSorted(t1, t2);
        
        while(rt1.size() > 1) {
            t2 += rt1[rt1.size()-1];
            rt1.pop_back();
            if(isSorted(rt1, t2)) {
                sorted = true;
                break;
            }
        }

        while(rt2.size() > 1) {
            t1 += rt2[rt2.size()-1];
            rt2.pop_back();
//            cout << "\n\n";
//            cout << t << '\n' << t1 << '\n' << rt2 << '\n';
//            cout << "\n\n";
            if(isSorted(t1,rt2)) {
//                cout << "\n\n";
//                cout << t << '\n' << t1 << '\n' << rt2 << '\n';
//                cout << "\n\n";
                sorted = true;
                break;
            }
        }

        if(sorted) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }

    return 0;
}
