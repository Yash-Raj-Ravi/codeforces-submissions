#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
 
        if(a[0] == 0 && a[n-1] == 0) {
            cout << 0 << endl;
        }
 
        else if((a[0] == 0 && a[n-1] == 1) ||
                (a[0] == 1 && a[n-1] == 0)) {
 
            bool found = false;
 
            for(int i = 1; i < n-1; i++) {
                if(a[i] == 0) {
                    cout << 1 << endl;
                    found = true;
                    break;
                }
            }
 
            if(!found)
                cout << -1 << endl;
        }
 
        else {
            int cnt = 0;
 
            for(int i = 1; i < n-1; i++) {
                if(a[i] == 0)
                    cnt++;
            }
 
            if(cnt >= 2)
                cout << 2 << endl;
            else
                cout << -1 << endl;
        }
    }
 
    return 0;
}