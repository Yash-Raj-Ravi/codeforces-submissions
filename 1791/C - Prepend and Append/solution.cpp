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
        string s;
        cin>>s;
 
        int i=0, j = n-1;
        int cnt=0;
 
        while(s[i]!=s[j] && i<j){
            if(s[i]!=s[j]) {cnt++;
            i++;j--;}
        }
        cout<<n-2*cnt<<"
";
    }
 
    return 0;
}
// Re-Submit