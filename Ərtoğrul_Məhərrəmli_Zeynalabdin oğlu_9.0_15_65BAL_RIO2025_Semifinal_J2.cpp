#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,say=0;
    cin>>t;
    int n;
    long long ans=1;
    while(t--){
        cin>>n;
        int a[n],b[n];
        int dp[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        say=0;
        ans=1;
        for(int i=n-1; i>=0; i--){
           for(int j=n-1; j>=0; j--){
               if(b[i]<=a[j])
               say++;
               else
               break;
           }
           dp[i]=say;
           say=0;
        }
        for(int i=n-1; i>=0; i--){
           ans=ans*(dp[i]-n+i+1);
           ans=ans%1000000007;
        }
        cout<<ans<<endl;
    }
}