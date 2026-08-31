#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    // your code
    int n;
    cin>>n;
 
    vector<int> a(n);
 
    for(int i=0;i<n;i++) cin>>a[i];
 
    int minOp=1e9;
    for(int i=0;i<n;i++)
    {
        if(abs(a[i]-0)<minOp) minOp=abs(a[i]-0);
    }
 
    cout<<minOp<<endl;
 
 
    return 0;
}