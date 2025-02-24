#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,b,c,d,e,m,say=0,say1=0,say2=0,ans=0;
    cin>>n>>m;
    char a[n][m];
    vector<pair<ll,pair<ll,ll>>>v,v1;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            say1=0;
            say=0;
            for(ll l=0;l<j;l++){
                if(l==j)
                continue;
                if(a[i][l]=='1'){
                    say1++;
                }
                else
                    say++;
            }
            for(ll l=j+1;l<m;l++){
                if(l==j)
                continue;
                if(a[i][l]=='1'){
                    say1++;
                }
                else
                    say++;
            }
            for(ll l=0;l<i;l++){
                if(l==i)
                continue;
                if(a[l][j]=='1')
                    say1++;
                else
                    say++;
            }
            for(ll l=i+1;l<n;l++){
                if(l==i)
                continue;
                if(a[l][j]=='1')
                    say1++;
                else
                    say++;
            }
            if(say==0 and say1>0){
                ans++;
            }
            else if(say>0 and say1==0)
                ans++;
            else if(say==0 and say1==0)
                ans++;
        }
    }
    cout<<ans<<endl;
}
int main(){
ll tt=1;
//cin>>tt;
while(tt--){
    solve();
}
}
