#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll sz=1e5+7;
ll gsz=1e3+7;
ll dpsz=1e4+7;








void solve(){
    ll saat,deqiqe;
    char ch;
    cin>>saat;
    cin>>ch;
    cin>>deqiqe;
    ll gecik;
    cin>>gecik;// 10:00 60
    ll k=deqiqe+gecik;
    ll a=k;
    k/=60;
    saat+=k;
    if(saat<10 or saat>23) cout<<0;

    cout<<saat%24<<':';
    if(a%60<10) cout<<0;
    cout<<a%60<<endl;
    ///cout<<a<<endl;
}






signed main(){
    ll t=1;
    cin>>t;
    while(t--) solve();
}
