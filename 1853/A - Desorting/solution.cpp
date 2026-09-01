#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    // your code
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int minDiff=1e9;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
 
        for(int i=0;i<n-1;i++) {
            if(a[i+1]-a[i] < minDiff){
                minDiff = a[i+1] - a[i];
            }
        }
        if(minDiff<0) cout<<0<<endl;
        else cout<<(minDiff/2)+1<<endl;
 
    }
 
    return 0;
}