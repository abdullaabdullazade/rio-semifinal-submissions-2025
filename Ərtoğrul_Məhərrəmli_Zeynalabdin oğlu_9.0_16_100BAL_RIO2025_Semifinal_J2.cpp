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
        vector<int>a(n),b(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        say=0;
        ans=1;
        for(int i=n-1; i>=0; i--){
            long long say=a.end()-lower_bound(a.begin(),a.end(),b[i]);
            ans=ans*(say-n+i+1);
            ans=ans%1000000007;
        }
        cout<<ans<<endl;
    }
}