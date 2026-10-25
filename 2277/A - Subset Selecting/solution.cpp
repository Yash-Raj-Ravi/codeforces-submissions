#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n,k;
        cin>>n>>k;
 
        vector<int> freq(n + 1, 0);
 
        vector<int> a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
            freq[a[i]]++;
        }
        ll count = 0;
        int ans = 0;
 
        for(int i=0;i<n+1;i++){
            count += freq[i];
 
            if(freq[i]==0) break;
 
            if(count< 1LL*k*(i+1)) break;
 
            ans = i+1;
        }
        cout<<ans<<"
";
    }
 
    return 0;
}