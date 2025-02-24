// 11:14:59 -> 14:14:59
// A-> 0
// B-> 0
// C-> 0
// D-> 0
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define endl "\n"
const int mod = 1e9+7;
void solve(){
   ll n;
   cin>>n;
   vector<ll>a(n),b(n);
    for(ll i=0;i<n;i++){
    cin>>a[i];
   }
   for(ll i=0;i<n;i++){
    cin>>b[i];
   }
   sort(a.begin(),a.end());
   sort(b.begin(),b.end());
   ll say=0,ans=1;
   for(ll i=0;i<n;i++){
        say=0;
        for(ll j=0;j<n;j++){
            if(a[i]>=b[j])
                say++;
        }
        if(say==0){
            cout<<0<<endl;
            return;
        }
        say=say-i;
        ans*=say;
   }
   cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tt=1;
    cin>>tt;
    while(tt--)
    solve();
}
// 5 8 10
// 4 5 9
