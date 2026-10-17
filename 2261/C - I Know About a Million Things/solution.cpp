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
 
        int evens=0;
        int odds=0;
 
        for(int i=0;i<n;i++){
            if(a[i]%2) odds++;
            else evens++;
        }
        if(n==1) cout<<"Moggity"<<endl;
 
        else if(n==2){
            if((a[0]+a[1])%2) cout<<"Larpity"<<endl;
            else cout<<"Moggity"<<endl;
        }
 
        else{
 
        if(odds%2==0) cout<<"Moggity"<<endl;
        else if(odds==3 && evens==0){ cout<<"Larpity"<<endl;}
        else cout<<"Moggity"<<endl;
    }
 
 
    }
 
    return 0;
}