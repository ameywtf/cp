#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("circlecross.in", "r", stdin) ;
    freopen("circlecross.out", "w", stdout);
    
    string str;
    cin >> str;
    
    unordered_map<char, int> start;
    unordered_map<char, int> end;
    for(int i = (int)'A'; i <= (int)'Z';i++ ) {
        start[(char)i] = -1;
        end[(char)i] = -1;
    }
    for(int i = 0; i < 52; i++) {
        if(start[str[i]] == -1) {
            start[str[i]] = i;
        } else if (end[str[i]] == -1){
            end[str[i]] = i;
        }
    }

    int count = 0;

    for(int i = 0; i < 51; i++) {
        char a = str[i];
        if(end[a] == i) continue;
//        cout << "A " << a << '\n';
//        cout << '\n';
        for(int j = i+1; j < 52; j++) {
            char b = str[j];
            if(end[b] == j) continue;
            if(start[a] < start[b] && start[b] < end[a] && end[b] > end[a]) {
                count++;
//                cout << "a " << a << '\n';
//                cout << "b " << b << '\n';
            }
        }
    }

    cout << count << '\n';


    return 0;
}
