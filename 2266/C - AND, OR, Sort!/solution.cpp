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
        string s;
        cin>>s;
 
        int zerosC = 0;
      
        if(s[0]=='1') {
            for(int i=0;i<n;i++){
                if(s[i]=='0') zerosC++;
            }
            cout<<zerosC<<endl;
        }
        else{
            int zerosAfter = count(s.begin(),s.end(),'0');
            int ans = zerosAfter;
            int onesBefore = 0;
 
            for(int i=0;i<n;i++){
                if(s[i]=='1'){
                    onesBefore++;
                }
                else{
                    zerosAfter--;
                }
                ans = min(ans,zerosAfter+onesBefore);
            }
            cout<<ans<<endl;
           
        }
 
    }
 
    return 0;
}