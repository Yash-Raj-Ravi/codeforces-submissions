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
        long long a,b,c;
        cin>>a>>b>>c;
 
        if(a>b){
            cout<<(a+c)-b<<endl;
        }
 
        else{
            long long sc = abs(a-b);
 
        if(c>=2*sc){
            sc = abs((a+c)-b);
        }
       
        cout<<sc<<endl;
    }
 
    }
 
    return 0;
}