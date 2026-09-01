#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int ans = 0;
 
        int bottom = 9;
        int right = 9;
 
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
 
                char c;
                cin >> c;
 
                if (c == 'X') {
                    int minDist = min({j, right - j, bottom - i, i});
 
                    ans += minDist + 1;
                }
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}