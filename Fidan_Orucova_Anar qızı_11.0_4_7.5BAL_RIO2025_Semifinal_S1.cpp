#pragma GCC optimize("03")
#include <bits/stdc++.h>
#define int long long
#define F first
#define S second
using namespace std;

 void solve(){
     int a,b;
     cin>>a>>b;
     for(int i=a;i<=b;i++){
        string s=to_string(i);
        string t=s;
        reverse(t.begin(),t.end());
        if(t==s) cout<<"Palindrome!\n";
        else cout<<i<<"\n";
     }
}
 signed main(){
     ios_base::sync_with_stdio(0); cin.tie(0);
     int t=1;
     //cin>>t;
     while(t--) solve();
 }

