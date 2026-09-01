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
        cin>>n;
        vector<int> a(n);
        vector<int> b;
        vector<int> c;
        for(int i=0;i<n;i++) cin>>a[i];
 
        bool allsame=true;
        for(int i=0;i<n;i++) 
        {
            if(a[i]!=a[0]) allsame = false;
        }
        if(allsame) cout<<-1<<endl;
        else{
            sort(a.begin(),a.end());
        
            for(int i=0;i<n;i++)
            {
                if(a[i]==a[0]) b.push_back(a[i]);
                else c.push_back(a[i]);
            }
            cout<<b.size()<<" "<<n-b.size()<<endl;
            for(int i=0;i<b.size();i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<c.size();i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
    }
 
    return 0;
}