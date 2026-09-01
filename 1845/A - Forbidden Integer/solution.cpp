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
        int n,k,x;
        cin>>n>>k>>x;
        vector<int> ans;
        if(x!=1) {
            cout<<"Yes"<<endl;
            cout<<n<<endl;
            vector<int> ans1(n,1);
            for(int i=0;i<n;i++){
                cout<<ans1[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            if(k==1) cout<<"No"<<endl;
            else{
                if(k==2) {
                    if(n%2==0) {
                        cout<<"Yes"<<endl; 
                        cout<<n/2<<endl;
                        vector<int> ans2(n/2,2);
                          for(int i=0;i<n/2;i++){
                             cout<<ans2[i]<<" ";
                               }
                           cout<<endl;
 
                    }
                    else cout<<"No"<<endl;
                }
                else // k>2
                {
                    if(n%2==0) {
                        cout<<"Yes"<<endl; 
                        cout<<n/2<<endl;
                        vector<int> ans2(n/2,2);
                          for(int i=0;i<n/2;i++){
                             cout<<ans2[i]<<" ";
                               }
                           cout<<endl;
 
                    }
                    else{
                    cout<<"Yes"<<endl;
                    cout<<n/2<<endl;
                     vector<int> ans3((n/2)-1,2);
                          for(int i=0;i<(n/2)-1;i++){
                             cout<<ans3[i]<<" ";
                               }
                           cout<<3<<endl;
                        }
 
                }
            }
        }
 
    }
 
    return 0;
}