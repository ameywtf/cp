#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string str1;
    string str2;

    cin >> str1 >> str2;
    
    int counter = 0;
    int correct = 0;
    for(int i = 0; i < n; i++) {
        if(str2[i] != str1[i]) {
            if(!correct) {
                correct = 1;
                counter++;
            }
        } else {
            correct = 0;
        }
    }

    cout << counter << '\n';

    return 0;
}
