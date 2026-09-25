#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        
        vector<int> ans;
 
        int freq[101] = {};
        for(int x:a){
            freq[x]++;
        }
 
        for(int k=1;k<=n;k++){
            for(int x=100;x>=1;x--){
                if(freq[x]>=k){
                    ans.push_back(x);
                }
            }
        }
       for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
       }
       cout<<endl;
 
    }
 
    return 0;
}