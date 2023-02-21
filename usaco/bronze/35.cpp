#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin >> n;

    vector<string> cows = {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};

    sort(cows.begin(), cows.end());

    vector<pair<string, string>> v(n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 6; j++) {
            string str;
            cin >> str;
            if(j == 0) {
                v[i].first = str;
            } else if(j == 5) {
                v[i].second = str;
            }
        }
        cout << v[i].first << " " << v[i].second << '\n';
    }
    
//    int counter = 0;
    do {
//        counter++;
        int num = 1;
        for(int i = 0; i < n; i++) {
            auto a = find(cows.begin(), cows.end(), v[i].first);
            auto b = find(cows.begin(), cows.end(), v[i].second);
            if (abs(a - b) != 1) {
                num = 0;
            } 
        }
        if(num) {
            break;
        }
        
    } while(next_permutation(cows.begin(), cows.end()));

    for(string str : cows) {
        cout << str << '\n';
    }

//    cout << '\n' << counter << '\n';

    return 0;
}
