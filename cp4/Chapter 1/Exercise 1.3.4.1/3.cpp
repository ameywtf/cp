#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    multiset<tuple<int, int, int>> birthdays;
    birthdays.emplace(5, 24, -1980);               
    birthdays.emplace(5, 24, -1982);               
    birthdays.emplace(11, 13, -1983);              
    birthdays.emplace(5, 24, -1982);               
    for (auto &[mm, dd, yyyy] : birthdays)         
        cout << dd << '/' << mm << '/'<< -yyyy << '\n';
    
    return 0;
}
