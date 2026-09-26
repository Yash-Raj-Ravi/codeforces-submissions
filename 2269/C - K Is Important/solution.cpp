#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n,k;
        cin>>n>>k;
 
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
 
        long long score = 0;
        while(a.size()>=k){
        int idx = -1;
        if(a[k-1] > a[a.size()-k]){
            idx = k-1;
            score += a[k-1];
        }
        else{
            idx = a.size()-k;
            score += a[a.size()-k];
        }
        
        a.erase(a.begin() + idx);
 
        }
        cout<<score<<endl;
 
    }
 
    return 0;
}