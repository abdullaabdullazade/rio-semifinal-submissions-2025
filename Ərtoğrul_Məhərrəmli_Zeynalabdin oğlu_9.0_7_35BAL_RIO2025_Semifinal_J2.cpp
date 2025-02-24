#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int t;
    cin>>t;
   ll n,say;
   ll k=1;
    while(t--){
        cin>>n;
        k=1;
        ll dp[n+1];
        ll o[n],q[n];
        for(int i=0; i<n; i++){
            cin>>q[i];
        }
        for(int i=0; i<n; i++){
            cin>>o[i];
        }
        sort(o,o+n);
        sort(q,q+n);

     for(int i=0; i<n; i++){
        say=0;
        for(int j=0; j<n; j++){
            if(o[i]<=q[j])
                say++;
        }
        dp[i+1]=say;
     }
     say=0;
     for(int i=n; i>0; i--){
       if(dp[i]!=dp[i-1]){
            dp[i]=dp[i]-n+i;
        for(int j=0; j<=say; j++){
        k=k*(dp[i]+j);
        k=k%1000000007;
        }
       say=0;
       }
       else
        say++;

     }
     cout<<k%1000000007<<endl;





    }
}
