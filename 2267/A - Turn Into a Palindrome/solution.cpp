#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        char c;
        cin>>n>>c;
       
        string s;
        cin>>s;
 
        int start = 0;
        int end = n-1;
        int cntP = 0; // Non-matching pairs
        int cntC = 0; // Non-matching chars
        while(end>start){
 
             if(s[start]==s[end]){
                start++; end--;
            }
 
            else{
                if(s[start]!=c && s[end]!=c){
                    cntP++;
                    
                }
                else{
                    cntC++;
                }
                start++; end--;
              }
           
        }
 
        cout <<2*cntP + cntC <<endl;
    }
 
    return 0;
}