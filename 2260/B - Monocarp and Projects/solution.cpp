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
        long long x,y,k;
        cin>>x>>y>>k;
 
        long long ans = 0 , i=0;
 
 
        for(; i<k && x+i <= y-x; i++){
            ans += (y + i) % (x + i);
        }
        ans += (k-i)*(y-x);
        cout<<ans<<endl;
    }
 
    return 0;
}