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
 
        long long val = pow(2,n-k+1) ;
 
        if(k-1>0) {
            val +=2*(k-1);
        }
 
        cout<<val<<endl;
    }
 
    return 0;
}