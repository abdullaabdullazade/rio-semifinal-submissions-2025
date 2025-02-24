#pragma GCC optimize("03")
#include <bits/stdc++.h>
#define int long long
#define F first
#define S second
using namespace std;

 void solve(){
     int n,m; cin>>n>>m; string t;

     for(int a=n;a<=m;a++){

        string s=to_string(a);
        t=s;
        sort(s.rbegin(), s.rend());
        if(s==t && a%10) cout<<"Palindrome!\n";

        else cout<<t<<"\n";
     }
}
 signed main(){
     ios_base::sync_with_stdio(0); cin.tie(0);
     int t=1;
     //cin>>t;
     while(t--) solve();
 }
